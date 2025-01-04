#include <string>
#include <utility>
#include <cctype>

using namespace std ;

std::pair<std::string, std::string> capitalize(const std::string &s)
{
    string Odd = "" ;
    string Even = "" ;

    for (int i = 0 ; i < s.size() ; i++) {

        if (i % 2 == 0) {
            Even += toupper(s[i]) ;
            Odd += s[i] ;
        }
        else {
            Odd += toupper(s[i]) ;
            Even += s[i] ;
        }
            
    }

    return {Even , Odd} ;
}