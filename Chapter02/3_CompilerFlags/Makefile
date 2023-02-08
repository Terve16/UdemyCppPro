##################
## VARIABLES	##
##################
# Note: Variables can only be strings
# Note: Single or double quotes for variable names or values have no meaning to Makefile


# CC: Program for compiling C programs; default cc
# CXX: Program for compiling C++ programs; default g++

# CFLAGS: Extra flags to give to the C compiler
# CXXFLAGS: Extra flags to give to the C++ compiler
# CPPFLAGS: Extra flags to give to the C preprocessor
# LDFLAGS: Extra flags to give to the linker

DEBUG = 1
EXECUTABLE_NAME = main

CXX_STANDARD = c++17
CXX = g++
CXXWARNINGS = -Wall -Wextra -Wpedantic
CXXFLAGS = $(CXXWARNINGS) -std=$(CXX_STANDARD)
CPPFLAGS =
LDFLAGS =

ifeq ($(DEBUG), 1)
CXXFLAGS += -g -O0
else
CXXFLAGS += -O3
endif

COMPILERCALL = $(CXX) $(CXXFLAGS)

##################
## TARGETS		##
##################

build: main.o my_lib.o
	$(COMPILERCALL) main.o my_lib.o -o $(EXECUTABLE_NAME)

main.o:
	$(COMPILERCALL) main.cc -c


my_lib.o:
	$(COMPILERCALL) my_lib.cc -c

execute:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o
	rm -f $(EXECUTABLE_NAME)
