#include <vector>
#include <string>

using namespace std ;

vector<int> digitize(int n) {

    string str = to_string(n) ;
    vector <int> R ;

    for (int i = 0 ; i < str.length() ; i++)
        R.push_back(str[i] - '0') ;

    return R ;
}