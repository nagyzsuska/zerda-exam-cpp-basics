//============================================================================
// Name        : Exam2.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function that prints a multiplication table with a given base number
 * It should take the base number as a parameter, and print the output to the cout
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 */
void printMultiplication (int base);

int main() {
  printMultiplication (5);
  return 0;
}

void printMultiplication (int base) {
  for (int i = 1; i <= 10; i++) {
    cout << i << " * " << base << " = " << (i * base) << endl;
  }
}
