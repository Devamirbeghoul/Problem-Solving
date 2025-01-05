#include <string>
#include <cctype>

using namespace std ;

string Reverse(string str) {

    string R = "" ;

    for (int i = str.length() - 1 ; i >= 0  ; i--)
        R += str[i] ;
    
    return R ;
}

string Lower(string str) {

    for (int i = 0 ; i < str.length() i++)
        str[i] = tolower(str[i]) ;

    return str ;
}

bool isPalindrom (string str)
{
    return Lower(str) == Lower(Reverse(str)) ;
}