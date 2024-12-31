#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std ;

string twoSort(vector<string> s) {

    string R = "" ;

    sort(s.begin() , s.end()) ;

    R = s.at(0) ;

    for (int i = 1 ; i < R.size() ; i+= 4) {

        R.insert(i , "***") ;
    }

    
    return R ;
}

