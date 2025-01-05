#include <vector>

using namespace std ;

int Count(vector <int> Numbers , int x) {

    int Counter = 0 ;

    for (int Number : Numbers) {
        if (Number == x)
            Counter++ ;
    }

    return Counter ;
}

vector<int> oddOnesOut(vector <int> numbers) {

    vector <int> R ;

    for (int Number : numbers) {

        if (Count(numbers , Number) % 2 == 0)
            R.push_back(Number) ;
    }

    return R ;
}