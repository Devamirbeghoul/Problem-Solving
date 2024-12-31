#include <iostream>

using namespace std ;

int nthEven(int n) {

    int R = 0 ;

    for (int i = 1 ; i < n ; i++)
        R += 2 ;

    return R ;

    //or use better : return n * 2 - 2 ;
}