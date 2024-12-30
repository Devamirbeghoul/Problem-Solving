#include <iostream>
#include <vector>

using namespace std ;

int square_sum(const std::vector<int>& numbers) {

    int R = 0;

    if (numbers.size() != 0) {
        for (int Number : numbers)
        R += Number * Number ;
    }
    
    return R ;
}