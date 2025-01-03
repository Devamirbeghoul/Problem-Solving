#include <vector>

using namespace std ;

vector<int> evenNumbers(vector<int> arr, int n) {

    vector <int> R ;

    for (int i = arr.size() - 1 ; i >= 0 ; i--) {

        if  (n == 0)
            return R ;
        
        if (arr[i] % 2 == 0) {
            R.insert(R.begin() , arr[i]) ;
            n-- ;
        }
            
        
    }

    return R ;
}