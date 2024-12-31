#include <iostream>
#include <vector>

using namespace std ;

vector<int> MonkeyCount(int n) {

    vector <int> R ;

    for (int i = 1 ; i <= n ; i++)
        R.push_back(i) ;

    return R ;
}