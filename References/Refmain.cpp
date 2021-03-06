//
//  Refmain.cpp
//
//  Created by Pharrell_WANG on 29/11/2016.
//  Copyright © 2016 Pharrell_WANG. All rights reserved.
//

// >>---> pass by reference with pointer arguments

#include <iostream>
using namespace std;

void square(int *);

int main() {
    int number = 8;
    cout <<  "In main(): " << &number << endl;  // 0x22ff1c
    cout << number << endl;   // 8
    square(&number);          // Explicit referencing to pass an address
    cout << number << endl;   // 64
}

void square(int * pNumber) {  // Function takes an int pointer (non-const)
    cout <<  "In square(): " << pNumber << endl;  // 0x22ff1c
    *pNumber *= *pNumber;      // Explicit de-referencing to get the value pointed-to
}
