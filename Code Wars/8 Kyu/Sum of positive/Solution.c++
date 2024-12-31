#include <vector>

using namespace std ;

int positive_sum (vector<int> arr){

    int R = 0 ;

    for (int Number : arr) {
        if (Number > 0)
            R += Number ;
    }

    return R ;
}