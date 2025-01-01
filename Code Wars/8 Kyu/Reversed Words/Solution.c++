#include <string>
#include <vector>

using namespace std ;

string Reverse(string str) {

    string R = "" ;

    for (int i = str.length() - 1 ; i >= 0  ; i--)
        R += str[i] ;
    
    return R ;
}

string reverse_words(string str) {

    string R = "" , T = "" ;

    for (int i = str.length() - 1 ; i >= 0 ; i--) {
        if (str[i] == ' ') {
            R += Reverse(T) + " " ;
            T = "" ;
        }
        else
            T += str[i] ;
            
    }

    R += Reverse(T) ;

    return R ;
}

//or

string reverse_words(string str) {

    string R = "" , T = "" ;

    for (int i = 0 ; i < str.length() ; i++) {

        if (str[i] == ' ') {
            R = T + " " + R ;
            T = "" ;
        }
        else
            T += str[i] ;
    }



    R = T + " " + R ;

    R.pop_back() ;

    return R ;
}
