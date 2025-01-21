/*
 * File:random.cpp
 *-----------------
 * This file implements the random.h interface.
 * Please note this was taken directly from the textbook and lecture for CS300.
 */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include "random.h"
//#include <stdlib.h>
//#include <time.h>


/*
 * Implementation notes: randomInt
 * -------------------------------
 * The code for randomInt produces the number in four steps:
 * 1. Generate a random real number d in the range [0...1).
 * 2. Scale the number to the range [0 ... N) where N is the number of values.
 * 3. translate the number so that the range starts at the appropriate value.
 * 4. Conver the result to the next lower integer.
 *
 * The implementation is complicated by the fact that both the expression
 *
 *     RAND_MAX + 1
 * and the expression for the number of values
 *     high - low + 1
 *
 * can overflow the integer range.  These calculations must therefore be
 * performed using doubles instead of ints.
 */

int randomInt(int low, int high){
  initRandomSeed();
  //srand(int(time(NULL)));
  double d = std::rand() / (double(RAND_MAX) + 1);
  double s = d * (double(high) - low + 1);
  return int(floor(low + s));
}


/*
 * Implementation notes: initRandomSeed
 * ------------------------------------
 * The initRandomSeed function declares a static variable that keeps track
 * of wheter the seed has been initialized.  The first time initRandomSeed
 * is called, initialized is false, so the seed is set to the current time.
 */

void initRandomSeed(){
  static bool initialized = false;
  if (!initialized){
    std::srand(int(std::time(NULL)));
    //std::srand(int(std::time(0)));
    initialized = true;
  }
}


