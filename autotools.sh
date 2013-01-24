#!/bin/sh
#
#  autotools         Create configure tool
#

create() {
    echo "Create Configure ..."
    echo "aclocal ..."
    aclocal
    echo "autoheader ..."
    autoheader
    echo "touch NEWS README AUTHORS ChangeLog ..."
    touch README NEWS AUTHORS ChangeLog
    echo "automake -a ..."
    automake -a
    echo "autoconf ..."
    autoconf
    echo
}

clean() {
    echo "Clean Configure ..."
    rm -rf aclocal.m4
    rm -rf autom4te.cache
    rm -rf config.h
    rm -rf config.h.in
    rm -rf config.log
    rm -rf config.status
    rm -rf configure
    rm -rf depcomp
    rm -rf install-sh
    rm -rf missing
    rm -rf stamp-h1
    rm -rf Makefile.in
    rm -rf Makefile
    rm -rf src/Makefile.in
    rm -rf src/Makefile
    rm -rf src/.deps
    echo
}

case "$1" in
  create)
        create
	;;
  clean)
        clean
	;;
  recreate)
	clean
	create
	;;
  *)
	echo $"Usage: $0 {create|clean|recreate}"
        exit 1
esac

exit 0

