#include <iostream>

using namespace std ;

string repeat_str(size_t repeat, const std::string& str) {

    string R = "" ;

    for (size_t i = 0 ; i < repeat ; i++)
        R += str ;
    
    return R ;
}