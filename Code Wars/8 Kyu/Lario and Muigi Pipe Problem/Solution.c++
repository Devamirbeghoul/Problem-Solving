#include <vector>

using namespace std ;

int Max(vector<int> nums) {

    int M = nums[0] ;

    for (int i = 1 ; i < nums.size() ; i++) {
        if (M < nums[i])
            M = nums[i] ;
    }

    return M ;
}

int Min(vector<int> nums) {

    int M = nums[0] ;

    for (int i = 1 ; i < nums.size() ; i++) {
        if (M > nums[i])
            M = nums[i] ;
    }

    return M ;
}

vector<int> pipe_fix(vector<int> nums) {

    int n =  Max(nums);
    vector <int> R ;

    for (int i = Min(nums) ; i <= n ; i++)
        R.push_back(i) ;

    return R ;
}