#include <iostream>

using namespace std ;

string reverseString (string str )
{
    string R = "" ;

    for (int i = str.length() - 1 ; i >= 0 ; i--)
        R += str[i] ;

    return R ;
}

int main() {

    string S ;

    cout << "Enter Your Word : " ;
    cin >> S ;

    cout << "Reverse : " << reverseString(S) << endl ;

    return 0 ;
}