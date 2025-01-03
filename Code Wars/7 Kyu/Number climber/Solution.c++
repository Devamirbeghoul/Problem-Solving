#include <vector>

using namespace std ;

vector<int> climb(int n) {

    vector <int> R ;

    while (n > 1) {

        R.insert(R.begin() , n) ;
        n /= 2 ;
    }

    R.insert(R.begin() , 1) ;
    
    return R ;

    
}