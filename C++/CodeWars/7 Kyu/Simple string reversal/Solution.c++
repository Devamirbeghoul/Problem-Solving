#include <string>

using namespace std ;

string solve(string s){

    string R = "" ;

    for (int i = s.length() - 1 ; i >= 0 ; i--) {

        if (s[R.length()] == ' ')
            R += ' ' ;
            
        
        if (s[i] != ' ')
            R += s[i] ;
        
        
    }

    return R ;
}