## Process this file with automake to produce Makefile.in

ACLOCAL_AMFLAGS = -I m4
TESTS = check_mytokenizer
check_PROGRAMS = check_mytokenizer
check_mytokenizer_SOURCES = check_mytokenizer.c ${top_builddir}/src/mytokenizer.h
check_mytokenizer_CFLAGS = @CHECK_CFLAGS@
check_mytokenizer_LDADD = $(top_builddir}/src/libmytokenizer_C.la @CHECK_LIBS@
