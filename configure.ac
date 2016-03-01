#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
#
# This file can also be called configure.in, an older name.
#
AC_PREREQ([2.69])

AC_INIT([xlreg_cpp], [0.0.7], [jddixon at gmail dot com])

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([config])
LT_INIT
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([src/version.cpp])
AC_CONFIG_HEADERS([src/config.h])

# Checks for programs; first, for a C++ compiler
AC_PROG_CXX
AC_LANG(C++)

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS(iostream)

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT



