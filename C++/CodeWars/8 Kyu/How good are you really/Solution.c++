#include <vector>

using namespace std ;

int Avg(vector<int> classPoints) {

    int R = 0 ;

    for (int Number : classPoints)
        R += Number ;
    
    return R / classPoints.size() ;
}

bool betterThanAverage(vector<int> classPoints, int yourPoints) {

    return yourPoints > Avg(classPoints) ;
}