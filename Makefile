CC = g++
FLAG = -g -Wall
#FLAG = -Wall
INCLUDEPATH = -I../include
OUT_LIB_PATH = ./lib

all: base

base: clean
	mkdir build
	mkdir $(OUT_LIB_PATH)
	cd build; $(CC) -c $(INCLUDEPATH) $(FLAG) ../src/*.cpp
	cd build; ar csr libprotein.a *.o
	cp ./build/libprotein.a $(OUT_LIB_PATH)

clean: 
	rm -rf build 
	rm -rf $(OUT_LIB_PATH)


