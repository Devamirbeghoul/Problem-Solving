#include <string>

using namespace std ;

string doubles(string s){

    string R = "" ;

    for (char C : s) {

        if (R.empty() || R.back() != C)
            R.push_back(C) ;
        else
            R.pop_back() ;
    }

    return R ;
}