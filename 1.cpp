//============================================================================
// Name        : Exam1.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

bool hasBiggerOrEqual (int *array, int length, int number);

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int length = sizeof(array)/sizeof(int);
  cout << hasBiggerOrEqual (array, length, -1);
  return 0;
}

bool hasBiggerOrEqual (int *array, int length, int number) {
  for (int i = 0; i < length; i++) {
    return (array[i] >= number);
  }
}

