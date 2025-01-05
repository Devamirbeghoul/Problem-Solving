#include <vector>
#include <string>
#include <cctype>

using namespace std ;

vector<int> solve(vector<string> arr) {  
    
    vector <int> R ;

    for (int i = 0 ; i < arr.size() ; i++) {

        int Counter = 0 ;

        for (int j = 0 ; j < arr[i].size() ; j++) {

            if (toupper(arr[i][j]) == 65 + j)
                Counter++ ;
        }

        R.push_back(Counter) ;

    }

    return R ;
};