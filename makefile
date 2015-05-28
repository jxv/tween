all:
	gcc src/tween.c -c -o src/tween.o -I./include -Wall -Werror -pedantic -std=c11 -ffast-math -g -O3 -lc -lm -D_GNU_SOURCE
	ar rvs libtween.a src/tween.o
clean:
	rm libtween.a src/tween.o
install:
	cp include/*.h /usr/include
	cp libtween.a /usr/lib/

gcw0:
	mipsel-gcw0-linux-uclibc-cc src/tween.c -c -o src/tween.o -I./include -Wall -Werror -pedantic -std=c11 -ffast-math -g -O2 -lc -lm -D_GNU_SOURCE -I./include
	mipsel-gcw0-linux-uclibc-ar rvs libtween.a src/*.o
install_gcw0:
	cp include/*.h /opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/include
	cp libtween.a /opt/gcw0-toolchain/usr/mipsel-gcw0-linux-uclibc/sysroot/usr/lib
