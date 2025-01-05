#include <iostream>
#include <cctype>

using namespace std ;

bool is_uppercase(const std::string &s) {

    for (char C : s) {
        if (islower(C))
            return false
    }

    return true ;
}