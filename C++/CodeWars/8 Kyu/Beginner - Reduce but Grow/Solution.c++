#include <iostream>
#include <vector>

using namespace std ;

int grow(vector<int> nums) {
  
    int R = 1 ;

    for (int &Number : nums)
        R *= Number ;
    
    return R ;
}