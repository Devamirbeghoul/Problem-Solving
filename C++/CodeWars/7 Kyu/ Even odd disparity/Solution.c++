#include <vector>
#include <string>

using namespace std ;

int solve(vector <string> v) {

    int Result ;

    for (string S : v) {

        if (isdigit(S[0])) {

            if (stoi(S) % 2 == 0)
                Result++ ;
            else
                Result-- ;
        }

        
    }

    return Result ;

}