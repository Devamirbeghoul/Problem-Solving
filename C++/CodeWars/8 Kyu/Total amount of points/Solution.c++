#include <vector>

using namespace std ;

int points(array<string, 10> games) {
    
    int R = 0 ;

    for (int i = 0 ; i < 10 ; i++) {
        int s = games[i][0] -  '0';
        int q = games[i][2] - '0' ;

        if (s > q)
            R += 3 ;
        else {
            if (q == s)
                R++ ;
        }
    }

    return R ;
}