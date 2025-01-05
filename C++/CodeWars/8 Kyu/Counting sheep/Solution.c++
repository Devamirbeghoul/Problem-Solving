#include <iostream>
#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) {

    int Counter = 0 ;

    for (bool IsValid : arr) {
        if (IsValid)
            Counter++ ;
    }

    return Counter ;
}