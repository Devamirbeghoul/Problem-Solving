#include <iostream>

using namespace std ;

int centuryFromYear(int year) {

    return (year % 100 == 0) ? year/100 : year/100 + 1 ; 

}


int main() {

    int Year ;

    cout << "Enter Year : " ;
    cin >> Year ;

    cout << "Century is : " << centuryFromYear(Year) << endl ;


    return 0 ;
}