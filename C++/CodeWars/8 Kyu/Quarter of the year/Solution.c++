#include <iostream>

using namespace std ;

int quarter_of(int month) {

    return (month % 3 == 0) ? month / 3 : month / 3 + 1  ;

    //return (month + 2) / 3 --Not My Answer but i like it
}


int main() {

    int Month ;

    cout << "Enter Month : " ;
    cin >> Month ;

    cout << "Quarter is : " << quarter_of(Month) << endl ;


    return 0 ;
}