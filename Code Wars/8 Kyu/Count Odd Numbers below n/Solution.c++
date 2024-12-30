#include <iostream>

using namespace std ;

int odd_count(int n){

    int R = 0 ;

    for (int i = 1 ; i < n ; i += 2)
        R++ ;
    
    return R ;

    //I see it in solution
    //return n/2
}