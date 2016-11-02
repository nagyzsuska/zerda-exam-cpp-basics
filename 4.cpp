//============================================================================
// Name        : Exam4.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

void divisorCounter(int num);

int main() {
  divisorCounter(77);
  return 0;
}

void divisorCounter(int num) {
  int counter = 2; //while every number (0 is an other case) has at least 2 divisors: one and the number itself;
  if (num == 0) {
    cout << "0 has infinite number of divisors." << endl;
  } else {
    for (int i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        counter++;
      }
    }
    cout << counter << endl;
  }
}
