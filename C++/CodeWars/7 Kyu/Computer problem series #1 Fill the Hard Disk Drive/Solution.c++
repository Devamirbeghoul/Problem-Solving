#include <vector>

using namespace std ;

int save(vector<int> sizes, int hd) {

    int R  ;
    int Counter = 0 ;

    for (R = 0 ; R < sizes.size() ; R++) {

        Counter += sizes[R] ;

        if (Counter > hd)
            break;
    }

    return R ;
}

