/*
*   Primitive3.cpp
*
*   By Michael Cho
*   1/8/2021
*/

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

// function that returns a rounded int
// By typcasting roundedNum from a float
// into an int, it drops the decimals.
// Adding .5 returns a correctly rounded int.
int myRoundingFunction(float num) {
    float roundedNum = num;
    roundedNum += .5;
    return (int)roundedNum;
}

int main() {

    float x = 1.51;
    float y = 1.4;
    float z = 1.6;
    
    // prints the rounded integers
    cout << myRoundingFunction(x) << endl;
    cout << myRoundingFunction(y) << endl;
    cout << myRoundingFunction(z) << endl;

    // error checking
    assert(myRoundingFunction(x) == round(x));
    assert(myRoundingFunction(y) == round(y));
    assert(myRoundingFunction(y) == round(y));
    
    return 0;
}

