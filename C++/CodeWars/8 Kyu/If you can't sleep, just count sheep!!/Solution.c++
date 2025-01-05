#include <string>

using namespace std ;

string countSheep(int number) {
  
  string R = "" ;

    for (int i = 1 ; i <= number ; i++)
        R += to_string(i) +  " sheep..." ;
    
    return R ;
}