CXX = g++
CXXFLAGS = -g3 -O0 -std=c++17 -pedantic -Wall -Wold-style-cast -Wextra -Woverloaded-virtual -I./

PROG = VMM
SRCS = main.cpp MemoryManagementUnit.cpp
OBJS = $(SRCS:.cpp=.o)

INPUT = addresses.txt
OUTPUT = output.txt

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $(PROG) $(OBJS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

MemoryManagementUnit.o: MemoryManagementUnit.cpp MemoryManagementUnit.hpp
	$(CXX) $(CXXFLAGS) -c MemoryManagementUnit.cpp

run:
	./$(PROG) < $(INPUT) 2>&1 | tee $(OUTPUT)

clean:
	rm -f core $(PROG) $(OBJS) $(OUTPUT)