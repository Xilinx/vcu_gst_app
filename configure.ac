dnl required version of autoconf
AC_PREREQ([2.53])

dnl fill in your package name and package version here
AC_INIT([vcu-gst-app],[1.0.0])

AC_CONFIG_SRCDIR([/src])
AC_CONFIG_HEADERS([config.h])

dnl required version of automake
AM_INIT_AUTOMAKE([1.10 subdir-objects foreign no-dependencies])

dnl enable mainainer mode by default
AM_MAINTAINER_MODE([enable])

dnl check for tools (compiler etc.)
AM_PROG_CC_C_O

dnl required version of libtool
LT_PREREQ([2.2.6])
LT_INIT

dnl error out if we can't find pkg-config
AC_CHECK_PROG(HAVE_PKGCONFIG, pkg-config, [ ], [
  AC_MSG_ERROR([You need to have pkg-config installed or set the PATH.])
])

dnl check if compiler understands -Wall
AC_MSG_CHECKING([to see if compiler understands -Wall])
save_CFLAGS="$CFLAGS"
CFLAGS="$CFLAGS -Wall"

dnl =======================================================================
dnl Finally, create Makefiles in all directories
dnl =======================================================================

AC_CONFIG_FILES([
Makefile
])
AC_OUTPUT
