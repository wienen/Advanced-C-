CXXFLAGS = -Wall
CXX = clang++

all: CE CSE

CE: CustomExceptions.cpp
	$(CXX) $(CXXFLAGS) -o CE CustomExceptions.cpp

CSE: CatchingSubclassExceptions.cpp
	$(CXX) $(CXXFLAGS) -o CSE $^
