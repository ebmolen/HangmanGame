/* File: hangman.h
 * --------------------------------
 * This file defines a function to print the hangman drawing for a game of hangman.
 */

#ifndef _hangman_h
#define _hangman_h

#include <iostream>
#include <cctype>

/*
 * Function: printHangman
 * Usage: printHangman(int n);
 * --------------------------
 * Based upon the number of wrong guesses remaining(n), prints the hangman drawing
 * for a game of hangman.
 */

void printHangman(int n);

#endif
