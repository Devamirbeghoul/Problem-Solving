#include <iostream>

using namespace std ;

string even_or_odd(int number) 
{
    return (number % 2 == 0) ? "Even" : "Odd" ;
}

int main() {

    int Number ;

    cout << "Enter Your Number : " ;
    cin >> Number ;

    cout << "The Number is : " << even_or_odd << endl ;

    return 0 ;
}