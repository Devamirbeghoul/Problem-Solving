#include <vector>

using namespace std ;

int elevator_distance(vector<int> array) {
  
    int R = 0 ;

    for (int i = 0 ; i < array.size() - 1 ; i++)
        R += (array[i] > array[i + 1] ? array[i] - array[i + 1] :  array[i + 1] - array[i]) ;

    return R ;
}