#include <iostream>
#include <string>

using namespace std ;

string sum_str(string a, string b) {

    return to_string(stoi((a == "") ? "0" : a) + stoi((b == "") ? "0" : b)) ;
    
    //return (a == "" && b == "") ? "0" : (a == "") ? b : (b == "") ?  a : to_string(stoi(a) + stoi(b)) ;
}

int main() {

    cout << sum_str("5" , "8") << endl ;

    return 0 ;
}
