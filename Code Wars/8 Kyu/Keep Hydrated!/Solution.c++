#include <iostream>
#include <cmath>

using namespace std ;

int litres(double time) {
    
    return floor(time * 0.5) ;
}

int main() {

    double Number = 0 ;

    cout << "Enter Number : " ;
    cin >> Number ;


    cout << "Litres : " << litres(Number) << endl ;


    return 0 ;
}