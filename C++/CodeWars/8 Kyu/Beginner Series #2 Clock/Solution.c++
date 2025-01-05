#include <iostream>

using namespace std ;

int past(int h, int m, int s) {
  
    return (((h * 60 + m) * 60) + s) * 1000 ;
}