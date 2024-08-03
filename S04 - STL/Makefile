CXXFLAGS = -Wall -std=c++11
CXX = clang++

# Be smart: just list all cpp files and extract the base names for the objects

objects = $(patsubst %.cpp,%,$(wildcard *.cpp))

all: $(objects) 

# $^: dependent file (compiles when changed), so the *.cpp file
# $@: the target (member of $(objects)).

$(objects): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm $(objects)

compile_commands: Makefile
	bear -- make all
