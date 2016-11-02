//============================================================================
// Name        : Exam3.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please mutliply the total variable by 5 with it.
 */

float multiply(float* p, float n);

int main() {
  float total = 123;
  cout << &total << endl;
  float num = 5;
  cout << multiply(&total, num) << endl;
  cout << total << endl;
  cout << &total << endl;
  return 0;
}

float multiply(float* p, float n) {
  return *p = (*p * n);
}
