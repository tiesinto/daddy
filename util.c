static void
eprint(const char *fmt, ...)
{
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(errbuf, sizeof errbuf, fmt, ap);
	va_end(ap);
	fprintf(stderr, "%s", errbuf);
	if(fmt[0] && fmt[strlen(fmt) - 1] == ':')
		fprintf(stderr, " %s\n", strerror(errno));
	exit(1);
}

static void
makeansi(const char *hex, char *out)
{
	int r = 0, g = 0, b = 0;
	sscanf(hex + 1, "%02x%02x%02x", &r, &g, &b);
	snprintf(out, 32, "\x1b[38;2;%d;%d;%dm", r, g, b);
}


char*
rstr(char *str, const char *substr, const char *rep)
{
	char *pos = strstr(str, substr);
	while (pos != NULL) {
		memmove(pos + strlen(rep), pos + strlen(substr), 
				strlen(pos + strlen(substr)) + 1);
		memcpy(pos, rep, strlen(rep));
		pos = strstr(pos + strlen(rep), substr);
	}
	return str;
}   

