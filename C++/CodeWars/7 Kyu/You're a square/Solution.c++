#include <cmath>

using namespace std ;

bool is_square(int n) {

    if (n < 0)
        return false ;

    int m = sqrt(n) ;

    return (m * m) == n ; 
}