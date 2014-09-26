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
  atomic_uint_least32_t valA;

  cout << "valA=" << valA << endl; // prints Hi
  //cout << "Hi! "  << endl; // prints Hi


	return 0;
}
