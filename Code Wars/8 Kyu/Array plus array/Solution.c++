#include <vector>

using namespace std ;

int SumOfArray(vector<int> a) {

    if (a.size() == 0)
        return 0 ;
    
    int R = 0 ;

    for (int i = 0 ; i < a.size() ; i++)
        R += a[i] ;
    
    return R ;
}

int arrayPlusArray(vector<int> a, vector<int> b) {

    return SumOfArray(a) + SumOfArray(b) ;
}