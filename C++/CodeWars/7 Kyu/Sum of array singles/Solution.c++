#include <vector>

using namespace std ;

int Count(vector <int> R , int x) {

    int Count = 0 ;

    for (int Number : R) {

        if (Number == x)
            Count++ ;
    }

    return Count ;
}

int repeats(vector<int>v){

    int R = 0 ;

    for (int i = 0 ; i < v.size() ; i++) {

        if (Count(v , v[i]) == 1)
            R += v[i] ;
    }

    return R ;
}