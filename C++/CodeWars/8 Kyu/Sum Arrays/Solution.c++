#include <vector>

using namespace std ;

int sum(vector<int> nums) {

    int R = 0 ;

    for (int Number : nums)
        R += Number ;
    
    return R ;
}