#include <iostream>

using namespace std ;

int ReadNumber(string message) {

    int Number ;

    cout << message ;
    cin >> Number ;

    return Number ;
}

bool isDivisible(int n, int x, int y) {
  
    return ((n % x == 0) && (n % y == 0)) ;
}

int main() {

    int n = ReadNumber("Enter n : ") ;
    int x = ReadNumber("Enter x : ") ;
    int y = ReadNumber("Enter y : ") ;

    if (isDivisible(n , x , y))
        cout << "Yes" << endl ;
    else
        cout << "No" << endl ;

    


    return 0 ;
}