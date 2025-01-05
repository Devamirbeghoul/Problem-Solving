#include <iostream>

using namespace std ;

int mango(int quantity, int price) {

    return price * (quantity - quantity / 3) ;
}

int ReadNumber(string message) {

    int Number ;

    cout << message ;
    cin >> Number ;

    return Number ;
}

int main() {

    int Price = ReadNumber("Enter Price : ") ;
    int Quantity = ReadNumber("Enter Quantity : ") ;

    cout << "Result : " << mango(Quantity , Price) << endl ;


    return 0 ;
}