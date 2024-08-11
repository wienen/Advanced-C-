# Compiler
CXX := clang++

# Compiler flags
CXXFLAGS := -Wall -std=c++11 -xc++

# Source files
SRCS := $(wildcard *.cpp)

# Executable files
EXES := $(SRCS:.cpp=)

# Default target
all: $(EXES) Nested RingBuffer

RingBuffer: RingBuffer.cpp Ring.h
	$(CXX) $(CXXFLAGS) -o bin/$@ $^

Nested: Nested.cpp Ring.h
	$(CXX) $(CXXFLAGS) -o bin/$@ $^


# Rule to build each executable
%: %.cpp
	$(CXX) $(CXXFLAGS) -o bin/$@ $<

# Clean rule
clean:
	rm -f $(EXES) *.o

