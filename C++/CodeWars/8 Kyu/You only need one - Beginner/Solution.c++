#include <vector>
#include <string>
#include <iostream>

using namespace std ;

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    
    if (seq.size() == 0)
        return false;
  
    for (string S : seq) {

        if (S == elem)
            return true ;
    }
   
    return false ;
}