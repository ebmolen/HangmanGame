#Makefile for Hangman Game


CXX = g++
OBJECTS = random.o randword.o main.o hangman.o
FLAGS = -std=c++20
SOURCE = $(wildcard *.cpp)

main: $(OBJECTS)
	$(CXX) $(FLAGS) $(OBJECTS) -o main

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
