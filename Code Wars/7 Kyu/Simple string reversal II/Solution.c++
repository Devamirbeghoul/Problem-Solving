#include <string>

using namespace std ;

void Swap(char &a , char &b) {

    char Temp = a ;
    a = b ;
    b = Temp ;
}

string solve(string s, int a, int b){

    if (b >= s.length())
        b = s.length() - 1 ;
    
    while (a <= b) {

        Swap(s[a] , s[b]) ;

        b-- ;
        a++ ;
    }

    return s ;
}