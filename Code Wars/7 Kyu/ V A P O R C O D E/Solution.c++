#include <string>
#include <cctype>

using namespace std ;

std::string vaporcode(const std::string &str) {
  
    string R = "" ;

    for (char C : str) {

        if (C != ' ') {
            R += toupper(C) ;
            R += "  " ;
        }
            
    }

    R.pop_back() ;
    R.pop_back() ;

    return R ;
}