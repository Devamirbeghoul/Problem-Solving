#include <iostream>
#include <vector>

using namespace std ;


int findSmallest(vector <int> list) {
  
    int R = list[0] ;

    for (int i = 1 ; i < list.size() ; i++) {
        if (R > list[i])
            R = list[i] ;
    }

    return R ;
}
