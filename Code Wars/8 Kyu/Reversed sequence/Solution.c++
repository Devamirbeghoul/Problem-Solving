#include <vector>

using namespace std ;

vector<int> reverseSeq(int n) {  
    
    vector <int> R ;

    for (int i = n ; i > 0 ; i--)
        R.push_back(i) ;

    return R ;
}
