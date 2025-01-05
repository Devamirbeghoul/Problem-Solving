#include <string>
#include <cctype>

using namespace std ;

string makeUpperCase (const std::string& input_str) {
    
    string R = "" ;

    for (int i = 0 ; i < input_str.length() ; i++)
        R += toupper(input_str[i]) ;
    
    return R ;
}