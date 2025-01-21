#Makefile for Project#1, Problem#5


CXX = g++
OBJECTS = random.o randword.o Problem5.o hangman.o
FLAGS = -std=c++20
SOURCE = $(wildcard *.cpp)

Problem5: $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o Problem5

# $< refers to the first prequisite
# $@ refers to the target
%.o: %.cpp %.h
	$(CXX) -c $< -o $@

run: Problem5
	./Problem5

echo:
	echo $(SOURCE)

clean: 
	rm -f *.o Problem5
