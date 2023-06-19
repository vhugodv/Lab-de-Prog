all: prog.e

prog.e: main_alg1.o readPGM.o writePGM.o freeimg.o extractimg.o meanfilter.o coords.o
	gcc -o prog.e main_alg1.o readPGM.o writePGM.o freeimg.o extractimg.o meanfilter.o coords.o

main_alg1.o:	main_alg1.c
	gcc -o main_alg1.o -c main_alg1.c

readPGM.o:	readPGM.c
	gcc -o readPGM.o -c readPGM.c

writePGM.o:	writePGM.c
	gcc -o writePGM.o -c writePGM.c

freeimg.o: 	freeimg.c
	gcc -o freeimg.o -c freeimg.c

extractimg.o:	extractimg.c
	gcc -o extractimg.o -c extractimg.c

meanfilter.o:	meanfilter.c
	gcc -o meanfilter.o -c meanfilter.c

coords.o:	coords.c
	gcc -o coords.o -c coords.c

clean:
	rm -f *.o prog.e