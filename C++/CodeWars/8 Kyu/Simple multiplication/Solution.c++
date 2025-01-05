#include <iostream>

using namespace std ;

bool IsEven(int Number) {

    return Number % 2 == 0 ;
}

int SimpleMultiplication(int a) {
    
    return (IsEven(a) ? a * 8 : a * 9) ;
}

int main() {

    int Number ;

    cout << "Enter Your Number : " ;
    cin >> Number ;

    cout << "Result : " << SimpleMultiplication(Number) << endl ;


    return 0 ;
}