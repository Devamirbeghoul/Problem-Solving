#include <string>

using namespace std ;

bool solution(std::string const &str, std::string const &ending) {
    
    int L = str.length();
    int R = ending.length() ;

    if (L < R)
        return false ;
    
    for (int i = 1 ; i <= R ; i++) {

        if (ending[R - i] != str[L - i])
            return false ;
    }

    return true ;
}

