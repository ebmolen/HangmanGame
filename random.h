/* File: random.h
 *-------------------
 * This interface exports functions for generating pseudorandom numbers.
 * Please note this was taken directly from CS300 textbook and lecture.
 */

#ifndef _random_h
#define _random_h



/*
 * Function: randomInt
 * Usage: int n = randomInt(low, high);
 * -----------------------------------
 * Returns a random integer in the range low to high, inclusive;
 */

int randomInt(int low, int high);


/*
 * Function: initRandomSeed;
 * Usage: initRandomSeed();
 * -----------------------
 * Sets a random seed value for randomInt(), so randomInt() produces a different set of
 * pseudorandom numbers each time it's called.
 */

void initRandomSeed();


#endif
