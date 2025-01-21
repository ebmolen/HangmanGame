/*
 * File: hangman.cpp
 * -----------------
 * This file implements the hangman.h interface
 */

#include <iostream>
#include <string>
#include <cctype>
#include "hangman.h"

/*
 * Implementation notes: printHangman
 * ----------------------------------
 * Input variable is int n, which represents the number of wrong guesses remaining
 * in a game of hangman.  Based upon n, the function prints a different drawing of hangman:
 * 7 -> draws scaffold
 * 6 -> adds head
 * 5 -> adds body
 * 4 -> adds one arm
 * 3 -> add second arm
 * 2 -> adds one leg
 * 1 -> adds second leg
 * 0 -> adds rope to scaffold
 * any other number -> draws nothing
 */

void printHangman(int n){
  if (n == 7){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    
  } else if (n == 6){
    std::cout << "_________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";

  } else if (n == 5){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "    |    |\n";
    std::cout << "    |    |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
  } else if (n == 4){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "   \\|    |\n";
    std::cout << "    |    |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
  } else if (n == 3){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "   \\|/   |\n";
    std::cout << "    |    |\n";
    std::cout << "         |\n";
    std::cout << "         |\n";
  } else if (n == 2){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "   \\|/   |\n";
    std::cout << "    |    |\n";
    std::cout << "   /     |\n";
    std::cout << "         |\n";

  } else if (n==1){
    std::cout << "__________\n";
    std::cout << "         |\n";
    std::cout << "    O    |\n";
    std::cout << "   \\|/   |\n";
    std::cout << "    |    |\n";
    std::cout << "   / \\   |\n";
    std::cout << "         |\n";
  } else if (n == 0){
    std::cout << "__________\n";
    std::cout << "    |    |\n";
    std::cout << "    O    |\n";
    std::cout << "   \\|/   |\n";
    std::cout << "    |    |\n";
    std::cout << "   / \\   |\n";
    std::cout << "         |\n";
  } else{
    return;
  }
  return;
}
