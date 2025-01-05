#include <iostream>

using namespace std ;

int getRealFloor(int f) {
  
    if (f <= 0)
        return f ;
    
    if (f <= 13)
        return f - 1 ;
    
    if (f > 13)
        return f - 2 ;
}