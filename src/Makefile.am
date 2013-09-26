# FIXME:  bison.hairy was not installed by the previous make system.
# Investigate if it's needed by the code.
dist_pkgdata_DATA = \
	bison.cc \
	bison.h \
	bison.hairy

noinst_LIBRARIES = libfiles.a
libfiles_a_SOURCES = \
	files.c \
	files.h
libfiles_a_CPPFLAGS = $(AM_CPPFLAGS) \
	-DXPFILE='"$(pkgdatadir)/bison.cc"' \
	-DXHFILE='"$(pkgdatadir)/bison.h"' \
	-DXPFILE1='"$(pkgdatadir)/bison.hairy"'

bin_PROGRAMS = bison++
bison___SOURCES = \
	allocate.c \
	closure.c \
	conflict.c \
	derives.c \
	getargs.c \
	gram.c \
	lalr.c \
	lex.c \
	lr0.c \
	main.c \
	nullable.c \
	output.c \
	print.c \
	reader.c \
	reduce.c \
	symtab.c \
	version.c \
	warshall.c \
	gram.h \
	lex.h \
	machine.h \
	new.h \
	state.h \
	symtab.h \
	system.h \
	types.h
bison___LDADD = \
	libfiles.a \
	../lib/libcompat.a
