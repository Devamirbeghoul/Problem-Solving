#include <vector>

using namespace std ;

vector <int> countPositivesSumNegatives(vector<int> input) {
    
    if (input.size() == 0)
        return {} ;
    
    int C = 0 , S = 0 ;

    for (int Number : input) {

        if (Number > 0)
            C++ ;
        else
            S += Number ;
    }

    return {C , S} ;
}