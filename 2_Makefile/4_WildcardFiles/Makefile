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

COMPILER_CALL = $(CXX) $(CXXFLAGS)

CXX_SOURCES = $(wildcard *.cc)
CXX_OBJECTS = $(patsubst %.cc, %.o, $(CXX_SOURCES))

##################
## TARGETS		##
##################

build: $(CXX_OBJECTS)
	$(COMPILER_CALL) $(CXX_OBJECTS) -o $(EXECUTABLE_NAME)

execute:
	./$(EXECUTABLE_NAME)

clean:
	rm -f *.o
	rm -f $(EXECUTABLE_NAME)

##################
## PATTERNS		##
##################
# $@: the file name of the target
# $<: the name of the first dependency
# %: wildcard
%.o: %.cc
	$(COMPILER_CALL) -c $< -o $@
