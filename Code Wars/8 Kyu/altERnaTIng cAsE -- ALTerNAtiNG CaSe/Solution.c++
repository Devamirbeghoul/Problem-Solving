#include <iostream>
#include <cctype>

using namespace std ;

string to_alternating_case(string str) {

    string R = "" ;

    for (int i = 0 ; i < str.length() ; i++) {

        if (isupper(str[i]))
            R += tolower(str[i]) ;
        else {
            if (islower(str[i]))
                R += toupper(str[i]) ;
            else
                R += str[i] ;
        }
    }
    
    return R ;

}

int main() {


    string Word ;

    cout << "Enter Your Word : " ;
    cin >> Word ;


    cout << "Result : " << to_alternating_case(Word) << endl ;


    return 0 ;
}