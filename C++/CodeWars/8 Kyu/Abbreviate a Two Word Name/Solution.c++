#include <iostream>
#include <cctype>

using namespace std ;

string abbrevName(string name) {

    string R = "" ;
    R += toupper(name[0]) ;
    R += "." ;
    R += toupper(name[name.find(" ") + 1]) ;

    return R ;
}