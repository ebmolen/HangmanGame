#Makefile for Hangman Game


CXX = g++
OBJECTS = random.o randword.o main.o hangman.o
FLAGS = -std=c++20
SOURCE = $(wildcard *.cpp)

Problem5: $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o Problem5

# $< refers to the first prequisite
# $@ refers to the target
%.o: %.cpp %.h
	$(CXX) -c $< -o $@

run: main
	./main

echo:
	echo $(SOURCE)

clean: 
	rm -f *.o main
