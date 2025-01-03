#include<vector>

using namespace std ;

long elementsSum(vector<vector<int>> arr, int d = 0) {

    int Index = arr.size() - 1 ;
    long R = 0 ;

    for (int i = 0 ; i < arr.size() ; i++) {

        if (Index < arr[i].size())
            R += arr[i][Index] ;
        else
            R += d ;
        
        Index-- ;
    } 

    return R ;
}