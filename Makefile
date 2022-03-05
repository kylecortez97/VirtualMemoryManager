CXX = g++
CXXFLAGS = -g3 -O0 -std=c++17 -pedantic -Wall -Wold-style-cast -Wextra -Woverloaded-virtual -I./

PROG = VMM
SRCS = main.cpp Word.cpp Address.cpp MemoryManagementUnit.cpp MemoryManager.cpp
OBJS = $(SRCS:.cpp=.o)

INPUT = addresses.txt
OUTPUT = output.txt

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $(PROG) $(OBJS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Word.o: Word.cpp Word.hpp
	$(CXX) $(CXXFLAGS) -c Word.cpp

Address.o: Address.cpp Address.hpp
	$(CXX) $(CXXFLAGS) -c Address.cpp

MemoryManagementUnit.o: MemoryManagementUnit.cpp MemoryManagementUnit.hpp
	$(CXX) $(CXXFLAGS) -c MemoryManagementUnit.cpp

MemoryManager.o: MemoryManager.cpp MemoryManager.hpp
	$(CXX) $(CXXFLAGS) -c MemoryManager.cpp

run:
	./$(PROG) < $(INPUT) 2>&1 | tee $(OUTPUT)

clean:
	rm -f core $(PROG) $(OBJS) $(OUTPUT)