##################
## VARIABLES	##
##################
DEBUG ?= 1
ifneq ($(DEBUG), 1)
CPP_COMPILER_FLAGS = -g -O0 -Wall -Wextra -Wpedantic -Wconversion -std=c++17
EXECUTABLE_NAME = mainDebug
else
CPP_COMPILER_FLAGS = -O3 -Wall -Wextra -Wpedantic -Wconversion -std=c++17
EXECUTABLE_NAME = mainRelease
endif

CPP_COMPILER = g++
CPP_COMPILER_CALL = $(CPP_COMPILER) $(CPP_COMPILER_FLAGS)

CPP_SRCS = $(wildcard *.cpp)
CPP_OBJECTS = $(patsubst %.cpp, %.o, $(CPP_SRCS))

CC_SRCS = $(wildcard *.cc)
CC_OBJECTS = $(patsubst %.cc, %.o, $(CC_SRCS))

######################
## PSEUDO TARGETS	##
######################
build: $(EXECUTABLE_NAME)

##################
## TARGETS		##
##################
$(EXECUTABLE_NAME): $(CC_OBJECTS) $(CPP_OBJECTS)
	$(CPP_COMPILER_CALL) $^ -o $@ $(EXECUTABLE_NAME)

execute:
	$(EXECUTABLE_NAME).exe

##################
## PATTERNS		##
##################
%.o: %.cpp
	$(CPP_COMPILER_CALL) -c $< -o $@

%.o: %.cc
	$(CPP_COMPILER_CALL) -c $< -o $@
