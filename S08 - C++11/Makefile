# Compiler
CXX := clang++

# Compiler flags
CXXFLAGS := -Wall -std=c++11 -xc++

# Source files
SRCS := $(wildcard *.cpp)

# Executable files
EXES := $(SRCS:.cpp=)

# Default target
all: $(EXES)

Nested: Nested.cpp Ring.h
	$(CXX) $(CXXFLAGS) -o $@ $^


# Rule to build each executable
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Clean rule
clean:
	rm -f $(EXES) *.o

