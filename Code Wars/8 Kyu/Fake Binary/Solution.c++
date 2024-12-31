#include <string>

using namespace std ;

string fakeBin(string str){

    string R = "" ;

    for (char C : str) {
        if (C < '5')
            R += '0' ;
        else
            R += '1' ;
    }

    return R ;
}