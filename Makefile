.POSIX:

NAME = daddy
VERSION = 1.0

# paths
PREFIX = /usr/local

# use system flags.
DADDY_CFLAGS = ${CFLAGS}
DADDY_LDFLAGS = ${LDFLAGS}
DADDY_CPPFLAGS = ${LDFLAGS} -DVERSION=\"${VERSION}\" -D_GNU_SOURCE

BIN = daddy
SRC = ${BIN:=.c}
OBJ = ${SRC:.c=.o}

all: ${BIN}

${BIN}: ${@:=.o}

${OBJ}: config.h strlcpy.c util.c

.o:
	${CC} -o $@ $< ${DADDY_LDFLAGS}

.c.o:
	${CC} -c ${DADDY_CFLAGS} ${DADDY_CPPFLAGS} -o $@ -c $<

config.h:
	cp config.def.h $@

clean:
	rm -f ${BIN} ${OBJ} "${NAME}-${VERSION}.tar.gz"

dist:
	mkdir -p "${NAME}-${VERSION}"
	cp -fR Makefile arg.h config.def.h \
		${SRC} util.c strlcpy.c "${NAME}-${VERSION}"
	tar -cf - "${NAME}-${VERSION}" | \
		gzip -c > "${NAME}-${VERSION}.tar.gz"
	rm -rf "${NAME}-${VERSION}"

install: all
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f ${BIN} "${DESTDIR}${PREFIX}/bin"
	chmod 755 "${DESTDIR}${PREFIX}/bin/${BIN}"

uninstall:
	rm -f "${DESTDIR}${PREFIX}/bin/${BIN}"

.PHONY: all clean dist install uninstall
