#include <iostream>
#include <vector>

using namespace std ;

int min(vector<int> list){
    
    int Min = list[0] ;

    for (int &Number : list) {
        if (Min > Number)
            Min = Number ;
    }

    return Min ;
}

int max(vector<int> list){
    
    int Max = list[0] ;

    for (int &Number : list) {
        if (Max < Number)
            Max = Number ;
    }

    return Max ;
}
