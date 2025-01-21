/* File: randword.h
 * --------------------------------
 * This file defines two functions to be used in a game of hangman.
 */

#ifndef _randword_h
#define _randword_h

#include <string>
#include <fstream>
#include <cctype>
#include <iostream>

/*
 * Function: InitDictionary
 * Usage: InditDictionary(std::string fileName);
 * ----------------------------------------------
 * Takes a string fileName as input.  The string is the name of a .txt file containing a list of
 * words, one per line.  Reads the words in the file into a static global array wordList.
 */

void InitDictionary(std::string fileName);


/*
 * Function: ChooseRandomWord();
 * Usage: std::string choice = ChooseRandomWord();
 * -----------------------------------------------
 * Takes no arguments.  Returns a word chosen from the static global array wordList that was
 * populated by calling InitDictionary.
 */

std::string ChooseRandomWord();


#endif
