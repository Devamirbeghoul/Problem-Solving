#include <vector>

using namespace std ;

int Count(vector <int> v , int x) {

    int R = 0 ;

    for (int Number : v) {
        if (Number == x)
            R++ ;
    }

    return R ;
}

int most_frequent_item_count(vector<int> collection) {

    int R = 0 ;

    for (int Number : collection) {

        if (Count(collection , Number) > R)
            R = Count(collection , Number) ;
    }

    return R ;
}