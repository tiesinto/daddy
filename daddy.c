#include <errno.h>
#include <time.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <spawn.h>

#undef strlcpy
#include "strlcpy.c"
#include "arg.h"

#define LENGTH(X) (sizeof X / sizeof X[0])

typedef struct {
	const char *name;
	const char *bodilyfluid;
	const char *they;
	const char *them;
	const char *their;
	const char *theirs;
	const char *themself;
} Caregiver;

char *argv0;
static char errbuf[4096];
static char *opt_eval = NULL;
static char *opt_status = "0";
int nocol = 0;
int crand;
static FILE *channel = NULL;

#include "config.h"
#include "util.c"

const int clen = LENGTH(compliments);
const int elen = LENGTH(encouragements);
const char *const *response = compliments;
int rlen = clen;

static void
usage(void) {
	eprint("usage: daddy [-1cv] [[-e] command [args ...]]] [-s status]\n", argv0);
}

int
main(int argc, char *argv[]) {
	srand(time(NULL));
	channel = stderr;
	char ansi[20];
	makeansi(color, ansi);

	ARGBEGIN {
	case '1':
		channel = stdout;
		break;
	case 's':
		opt_status = EARGF(usage());
		break;
	case 'e':
		opt_eval = EARGF(usage());
		char *shcmd[] = { "/bin/sh", "-c", opt_eval, NULL };
		pid_t pid;
		extern char **environ;
		posix_spawnp(&pid, shcmd[0], NULL, NULL, shcmd, environ);
		int status;
		waitpid(pid, &status, 0);
		if (WEXITSTATUS(status))
			opt_status = "1"; /*TODO: use strlcpy */
		break;
	case 'c':
		nocol = 1;
		break;
	case 'v':
		eprint("daddy-"VERSION"\n");
		break;
	default:
		usage();
	} ARGEND;

	if (!strcmp(opt_status, "130")) /* TODO: choose ignored exit codes */
		return 0;
	else if (strcmp(opt_status, "0")) {
		if (!giveenc)
			return 0;
		response = encouragements;
		rlen = elen;
	} else if (!givecom)
		return 0;

	int crand = rand() % rlen;
	int drand = rand() % LENGTH(caregivers);
	int yrand = rand() % LENGTH(sweetie);
	int wrand = rand() % LENGTH(disparagement);
#ifdef __OpenBSD__
	if (pledge("stdio", NULL) == -1)
		eprint("error: pledge:");
#endif
	char resbuf[4096];
	strlcpy(resbuf, response[crand], sizeof(resbuf));   

	rstr(resbuf, "%%SWEETIE%%", sweetie[yrand]);
	rstr(resbuf, "%%DISPARAGEMENT%%", disparagement[wrand]);
	rstr(resbuf, "%%CAREGIVER%%", caregivers[drand].name);
	rstr(resbuf, "%%FLUID%%", caregivers[drand].bodilyfluid);
	rstr(resbuf, "%%THEY%%", caregivers[drand].their);
	rstr(resbuf, "%%THEM%%", caregivers[drand].their);
	rstr(resbuf, "%%THEIR%%", caregivers[drand].their);
	rstr(resbuf, "%%THEIRS%%", caregivers[drand].their);
	rstr(resbuf, "%%THEMSELF%%", caregivers[drand].their);

	fprintf(channel, "%s%s%s%s", nocol ? "" : ansi,
			resbuf, ending, nocol ? "" : "\x1b[0m");   

	return 0;
}
