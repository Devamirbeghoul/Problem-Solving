#include <iostream>

using namespace std ;

bool IsEven(int Number) {

    return Number % 2 == 0 ;
}

bool lovefunc(int f1, int f2) {
  
    return ((IsEven(f1) && !IsEven(f2)) || (IsEven(f2) && !IsEven(f1))) ;

}