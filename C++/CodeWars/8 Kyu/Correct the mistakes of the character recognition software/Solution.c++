#include <iostream>

using namespace std ;

string correct(string str) {
  
    string S = "" ;

    for (char C : str) {

        if (C == '1') {
            S += 'I' ;
            continue;
        }
            
        if (C == '0') {
            S += 'O' ;
            continue;
        }

        if (C == '5') {
            S += 'S' ;
            continue;
        }

        S += C ;
            
    }

    return S ;
}