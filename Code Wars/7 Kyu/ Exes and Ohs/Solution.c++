#include <string>
#include <cctype>

using namespace std ;

bool XO(const std::string& str) {

    int Result = 0 ;

    for (int i = 0 ; i < str.size() ; i++) {
        if (tolower(str[i]) == 'o') {
            Result++ ;
            continue;
        }
            
        if (tolower(str[i]) == 'x')
            Result-- ;
    }


    return Result == 0 ;
}