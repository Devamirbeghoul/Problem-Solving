#include <cmath>
#include <iostream>

using namespace std ;

bool is_even(double n) {

    return ((floor(n) - n != 0) ? false : (int)n % 2 == 0) ;

    //or

    //return ((floor(n) != ceil(n)) ? false : (int)n % 2 == 0) ;
}