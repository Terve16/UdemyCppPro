##################
## TARGETS		##
##################
build:
	g++ main.cc -o main

execute:
	./main

preprocess:
	g++ -E main.cc > main.i

compile:
	g++ -S main.i

assemble:
	g++ -c main.s

link:
	g++ main.o -o main

clean:
	rm -f *.o
	rm -f main
