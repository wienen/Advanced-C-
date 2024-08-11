CXXFLAGS = -Wall -std=c++11
CXX = clang++
LD = clang++

# Be smart: just list all cpp files and extract the base names for the objects

complex = Complex ComplexNumber Plus Equals Deref
objects = $(filter-out $(complex),$(patsubst %.cpp,%,$(wildcard *.cpp)))

all: $(objects) Complex

admin:
	echo $(objects)

# $^: dependent file (compiles when changed), so the *.cpp file
# $@: the target (member of $(objects)).


Complex: ComplexNumber.cpp Complex.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

Plus: Complex.cpp Plus.cpp
	$(CXX) $(CXXLFAGS) -o $@ $^

Equals: Complex.cpp Equals.cpp
	$(CXX) $(CXXLFAGS) -o $@ $^

Deref: Complex.cpp Deref.cpp
	$(CXX) $(CXXLFAGS) -o $@ $^

#Complex.o: Complex.cpp Complex.h
#	$(CXX) $(CXXFLAGS) -c Complex.cpp

$(objects): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm $(objects)

