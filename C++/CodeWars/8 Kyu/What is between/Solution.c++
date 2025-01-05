#include <iostream>
#include <vector>

using namespace std ;

vector<int> between(int start, int end) {

    vector <int> R ;

    for (int i = start ; i <= end ; i++)
        R.push_back(i) ;
    
    return R ;
} 