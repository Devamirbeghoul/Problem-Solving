#include <iostream>
#include <vector>

using namespace std ;

vector <int> invert(vector<int> values) {

    vector <int> R ;

    for (int &Number : values)
        R.push_back(Number * -1) ;

    return R ;

}