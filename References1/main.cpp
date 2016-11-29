//
//  main.cpp
//  References1
//
//  Created by Pharrell_WANG on 29/11/2016.
//  Copyright © 2016 Pharrell_WANG. All rights reserved.
//

/* Pass-by-reference using reference  */
#include <iostream>
using namespace std;

void square(int &);

int main() {
    int number = 8;
    cout <<  "In main(): " << &number << endl;  // 0x22ff1c
    cout << number << endl;  // 8
    square(number);          // Implicit referencing (without '&')
    cout << number << endl;  // 64
}

void square(int & rNumber) {  // Function takes an int reference (non-const)
    cout <<  "In square(): " << &rNumber << endl;  // 0x22ff1c
    rNumber *= rNumber;        // Implicit de-referencing (without '*')
}
