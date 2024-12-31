#include <iostream>
#include <vector>

using namespace std ;

vector<int> countBy(int x,int n){

    vector <int> R ;

    for (int i = 1 ; i <= n ; i++)
        R.push_back(x * i) ;
    
    return R ;
        
}