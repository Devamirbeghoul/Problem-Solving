#include <iostream>
#include <vector>

using namespace std ;

double calcAverage(const std::vector<int>& values){

    if (values.size() != 0) {
        double R = 0 ;

        for (int Number : values)
        R += Number ;

        return R / values.size() ;
    }

    return 0 ;
}