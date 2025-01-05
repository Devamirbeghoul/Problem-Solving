#include <iostream>
#include <string>

using namespace std ;


string multi_table(int number) {

    string R = "" ;

    for (int i = 1 ; i < 11 ; i++)
        R += to_string(i) + " * " + to_string(number) + " = " + to_string(number * i) + "\n" ;
    
    R.pop_back() ;

    return R
}