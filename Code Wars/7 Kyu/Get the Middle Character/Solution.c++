#include <string>

using namespace std ;

string get_middle(string input) {

    string R = "" ;

    int Index = (input.length() - 1) / 2 ;
    
    R += input[Index] ;
    R += input[Index + 1] ;
        
    if (input.length() % 2 != 0)
        R.pop_back() ;
        

    return R ;
}

//or

string get_middle(string input) {

    return input.length() % 2 == 0 ? input.substr((input.length() - 1) / 2 , 2) : input.substr((input.length() - 1) / 2 , 1) ;
}