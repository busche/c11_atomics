//============================================================================
// Name        : main.cpp
// Author      : Andre Busche
// Version     :
// Copyright   : LGPL-2.1
// Description : Main-file
//============================================================================

#include <iostream>
#include <atomic>

using namespace std;

int main() {
  atomic_uint_least32_t valA(0);
  // attention: not initialized -> random values possible!
  atomic_uint_least32_t valB;

  cout << "valA=" << valA << endl;
  cout << "valB=" << valB << endl;

  // set values
  cout << ".. storing values .." << endl;
  valA=10;
  valB.store(10);

  cout << "valA=" << valA << endl;
  cout << "valB=" << valB << endl;


	return 0;
}
