//
//  main.cpp
//  pointerYarrary
//
//  Created by Pharrell_WANG on 29/11/2016.
//  Copyright © 2016 Pharrell_WANG. All rights reserved.
//

/* Pointer and Array (TestPointerArray.cpp) */
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {11, 22, 44, 21, 41};  // An int array
    
    // The array name numbers is an int pointer, pointing at the
    // first item of the array, i.e., numbers = &numbers[0]
    cout << &numbers[0] << endl; // Print address of first element (0x22fef8)
    cout << numbers << endl;     // Same as above (0x22fef8)
    cout << *numbers << endl;         // Same as numbers[0] (11)
    cout << *(numbers + 1) << endl;   // Same as numbers[1] (22)
    cout << *(numbers + 4) << endl;   // Same as numbers[4] (41)
    
    cout<<"size of int on my Mac is: "<< sizeof(int)<<endl<<endl;
    int * p = numbers;
    cout<<"p    = "<<p<<endl;
    cout<<"p+1  = "<<p+1<<endl;
    cout<<"*p   = "<<*p<<endl;
    cout<<"*(p+1) ="<<*(p+1)<<endl;
    cout<<"*p + 1 = "<<*p + 1<<endl;
    
    int k[100];
    cout<<sizeof(k)<<endl;
    cout<<sizeof(k[0])<<endl;
    cout<<sizeof(k)/sizeof(k[0])<<endl;
    cout<<"ending.."<<endl;
    
}
