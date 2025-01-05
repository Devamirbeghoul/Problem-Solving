#include <vector>

using namespace std ;

bool isAscOrder(std::vector<int> arr) {

    for (int i = 0 ; i < arr.size() - 1 ; i++) {
        if (arr[i] > arr[i + 1])
            return false ;
    }

    return true ;
}