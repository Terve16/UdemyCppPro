##################
## TARGETS		##
##################
build: my_lib.o
	g++ main.cc my_lib.o -o main

my_lib.o:
	g++ my_lib.cc -c

execute:
	./main

clean:
	rm -f *.o
	rm -f main
