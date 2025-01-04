#include <string>

using namespace std ;
 
int sumOfIntegers (string str) {

    int Counter = 0 ;
    int Temp = 0 ;

    for (char C : str) {

        if (isdigit(C))
            Temp = Temp * 10 + (C - 48) ;
        else {
            Counter += Temp ;
            Temp = 0 ;
        }
    }

    return Counter + Temp ;
}