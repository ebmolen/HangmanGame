/* File: randword.cpp
 * --------------------------------
 * This file contains the implementations of the function prototypes in random.h
 */

#include "randword.h"
#include "random.h"
#include <string>
#include <cctype>


/*
 * Variable: static std::string wordList[100];
 * -------------------------------------------
 * a static global string array that holds the word list for the hangman game.
 * populated with the InitDictionary method.
 */
 
static std::string wordList [110];


/*
 * Implementation notes: InitDictionary
 * ------------------------------------
 * This function takes in the name of a .txt file as a string.  The .txt file should have a list
 * of words, one per line.  The function uses a while loop and getline() to populate
 * the static globals string array wordList with 100 words.  The .txt file should include 100 words.
 */

void InitDictionary(std::string fileName){
  std::ifstream infile;
  infile.open(fileName);

  if (infile.fail()){
    std::cout << "Failure openining " << fileName << std::endl;
  }

  std::string word;
  int i = 0;

  while (getline(infile, word)){
    wordList[i] = word;
        i++;
    
  }

  infile.close();
  return;
  
}


/*
 * Implementation notes: ChooseRandomWord();
 * -----------------------------------------
 * Takes no arguments. Uses the randomInt() method from random.h to choose a random integer (n)between
 * 0 and 99. It then returns wordList[n], essentiallly choosing a random word from the global sttatic
 * string array wordList.
 */

std::string ChooseRandomWord(){

  int n;

  //n = randomInt(0, 99);

  n = randomInt(0, 99);
  // std::cout << n << std::endl;

  return wordList[n];

}

