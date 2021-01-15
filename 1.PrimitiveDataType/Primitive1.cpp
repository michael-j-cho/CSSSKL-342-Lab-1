/*
 *  Primitive1.cpp
 *
 *  Created by Rob Nash
 *
 *  Modified by Yang Peng on 12/31/17
 */

#include <iostream>
using namespace std;
//#define DEBUG
int main()
{
  int a = 3;
  int b, c;
  b = c = 8;
    
  int d = a + b + c;
    
  std::cout << "Hello, World!\n";

  // std::cout << "Ugly: " << a << endl;
  std::cout << "a is " << a << endl;
  std::cout << "b is " << b << endl;
  std::cout << "c is " << c << endl;
  std::cout << "d is " << d << endl;

#ifdef DEBUG
  std::cerr << "This is a debug statement" << std::endl;
#endif
  
  return 0;
  
}

