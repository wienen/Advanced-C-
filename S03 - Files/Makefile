CXXFLAGS = -Wall
CXX = clang++

all: WTF RTF PTIF BF

WTF: WritingTextFiles.cpp
	$(CXX) $(CXXFLAGS) -o WTF $^

RTF: ReadingTextFiles.cpp
	$(CXX) $(CXXFLAGS) -o RTF $^

PTIF: ParsingTextInFiles.cpp
	$(CXX) $(CXXFLAGS) -o PTIF $^

BF: BinaryFiles.cpp
	$(CXX) $(CXXFLAGS) -o BF $^

#CSE: CatchingSubclassExceptions.cpp
#	$(CXX) $(CXXFLAGS) -o CSE $^
