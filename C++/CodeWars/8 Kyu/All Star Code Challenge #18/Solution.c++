#include <iostream>

using namespace std ;

unsigned int strCount(const std::string& word, char letter){
  
    if (word == "")
        return  0;
    
    int Counter = 0 ;

    for (char C : word) {
        if (C == letter)
            Counter++ ;
    }

    return Counter ;
}