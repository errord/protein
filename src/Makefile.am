INCLUDES = -I../include

# libprotein
libprotein_LIBRARIES = libprotein.a
libproteindir = @libdir@
libprotein_a_SOURCES = logging.cpp 	\
			dumping.cpp	\
			filesystem.cpp
LDADD = ./libprotein.a

# install headers file
pkginclude_HEADERS = ../include/protein/logging.hpp	\
			../include/protein/dumping.hpp	\
			../include/protein/filesystem.hpp \
			../include/protein/types.hpp

