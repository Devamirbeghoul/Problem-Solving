#include <iostream>

using namespace std ;

string boolean_to_string(bool b) {
  
    return (b) ? "true" : "false" ;
}

int main() {

    bool b ;

    cout << "Enter true(1)/false(0) : " ;
    cin >> b ;

    cout << boolean_to_string(b) << endl ;


    return 0 ;
}