#include <vector>

using namespace std ;

vector<int> digitize(unsigned long n) {

    if (n == 0)
        return {0} ;

    vector <int> R ;

    while (n != 0) {

        R.push_back(n % 10) ;

        n /= 10 ;
    }

    return R ;
}