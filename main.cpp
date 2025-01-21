/*
 * File: Problem5.cpp
 * ------------------
 * This program implements a game of hangman!
 *
 * To compile: make
 * To execute: make run
 */


#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "randword.h"
#include "random.h"
#include "hangman.h"

/* Main function */


int main(){

  //initRandomSeed();


  std::string fileOfWords = "wordList.txt";

  InitDictionary(fileOfWords);

  //https://stackoverflow.com/questions/76367489/srand-rand-slowly-changing-starting-value
  //This is to solve the problem I was having with srand() on my machine - discussed with Joe and Dr. Wagner.
  //Was working fine on Joe's machine, so this is really just a little extra thing, so it will work for me : )
  int test = randomInt(0, 99); 
  test = randomInt(0, 99);

  int n = 1;

  while(n){
  
    std::cout << "*********************************************************************************" << std::endl;
    std::cout << "\n";
    std::cout << "Welcome to Hangman!\n\n";
    std::cout << "I will pick a secret word.\n";
    std::cout << "One at a time, you will guess a letter that might appear in the word.\n";
    std::cout << "You will have 8 wrong guesses.\n";
    std::cout << "You win if you complete the word before your 8 wrong attempts are gone!\n\n";
    std::cout << "*********************************************************************************" << std::endl;

    // std::cout << std::endl;

    std::string choice = ChooseRandomWord(); // the secret word

    for (int i = 0; i < choice.length(); i++){
      choice[i] = tolower(choice[i]);
    }

    std:: vector <char> guesses; // holds guessed letters

    int length = choice.length(); // length of secret word

    int attempts = 8; // initialize round with 8 guesses

    std::string currentWord = "";

    for (int i = 0; i < length; i++){
      currentWord +=  "-";
    }

    char guess;  // guessed letter
  
    while (attempts > 0 && currentWord != choice){
      std::cout << "*********************************************************************************" << std::endl;
      std::cout << "\n";
      std::cout << "You have " << attempts << " wrong guesses left." << std::endl;
      std::cout << "\n";
      printHangman(attempts);
      std::cout << currentWord << std::endl;
      std::cout << "Guess a letter: ";
      std::cin >> guess;
      guess = tolower(guess);

      int accept = 0;
    
      while (accept == 0){
	int notIn = 1;
	if (guesses.size() == 0){
	  break;
	}
	for (int j = 0; j < guesses.size(); j++){
	  if (guesses[j] == guess){
	    std::cout << "You already guessed '" << guess << "'. Please guess again: ";
	    std::cin >> guess;
	    guess = tolower(guess);
	    notIn = 0;
	    break;
	  }
	}
	if (notIn == 1){
	  accept = 1;
	}
      }

  
      guesses.push_back(tolower(guess));
      int inWord = 0;
      for (int i = 0; i < length; i++){

	if (tolower(choice[i]) == guess){
	  currentWord[i] = tolower(guess);
	  inWord = 1;
	}
      
      }
      // std::cout << "accept = " << accept << std::endl;
      if (inWord){
	std::cout << "Yes! '" << guess << "' is in the secret word." << std::endl;
      } else {
	std::cout << "Wrong guess. '" << guess << "' is not in the secret word." << std::endl;
	attempts --;
      }
      std::cout << currentWord << std::endl;
      std::cout << std::endl;

     
      std::cout << "\n";
      std::cout << "*********************************************************************************" << std::endl;

    }

    // std::cout << std::endl;
    std::cout << "*********************************************************************************" << std::endl;
    std::cout << "\n";

    printHangman(attempts);

    if (attempts == 0 && currentWord != choice){
      std::cout << "You lost!" << std::endl;
      std::cout << "The secret word was '" << choice << ".'" << std::endl;
   
    } else{
      std:: cout << "Congratulations! You won!" << std::endl;
    }

    /*
      for (int i = 0; i < 1000; i++){
      std::cout << wordList[i] << std::endl;
      }
    */
    std::cout << "\n";
    std::cout << "*********************************************************************************" << std::endl;

    //std::cout << "\n";
    
    std::cout << "*********************************************************************************" << std::endl;
    std::cout << "\n";
    std::cout << "Do you want to play again (y/n)? ";

    char again;
    
    std::cin >> again;
    
    while ((again != 'n') && (again != 'y')){
      std::cout << "I don't understand your answer. Please type 'y' to play again or 'n' to exit the game: ";
      std::cin >> again;
    }

     if (again == 'n'){
      n = 0;
      std::cout << "\n";
      std::cout << "Thanks for playing Hangman!" << std::endl;
      std::cout << "\n";
      std::cout << "*********************************************************************************" << std::endl;

    }

  }
  return 0;
}




