#include <iostream>

using namespace std ;

string removeExclamationMarks(string str){

    string R = "" ;

    for (int i = 0 ; i < str.length() ; i++) {
        if (str[i] != '!')
            R += str[i] ;
    }

    return R ;

}

int main() {

    string Word ;

    cout << "Enter Your Word : " ;
    cin >> Word ;

    cout << "Result : " << removeExclamationMarks(Word) << endl ;



    return 0 ;
}