#include <vector>
#include <cmath>

using namespace std ;

int index(vector<int> vector, int n) {

    return (vector.size() <= n) ? -1 : pow(vector[n] , n) ;
}