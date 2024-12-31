#include <vector>

using namespace std ;

int get_average(vector <int> marks) {

    int R = 0 ;

    for (int Number : marks)
        R += Number ;
    
    return R / marks.size() ;
}