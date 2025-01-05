#include <iostream>

using namespace std ;

string no_space(const std::string& x) {

    string R = "" ;

    for (char C : x) {

        if (C != ' ')
            R += C ;
    }


    return R ;
}