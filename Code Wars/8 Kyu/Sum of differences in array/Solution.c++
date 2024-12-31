#include <iostream>
#include <vector>
#include <algorithm>


using namespace std ;

int sumOfDifferences(vector<int>arr){

    if (arr.size() == 0 || arr.size() == 1)
        return 0 ;
    
    sort(arr.rbegin() , arr.rend()) ;

    int R = 0 ;

    for (int i = 1 ; i < arr.size() - 1 ; i++)
        R += arr[i] - arr[i + 1] ;
    
    return R ;
}