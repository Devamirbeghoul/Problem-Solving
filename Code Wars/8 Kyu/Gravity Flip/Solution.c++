#include <vector>
#include <algorithm>
#include <cctype>


using namespace std ;

void Swap(int &a , int &b) {

    int x = a ;
    a = b ;
    b = x ;
}

vector <int> R(vector<int> arr) {

    if (arr.size() == 1 || arr.size() == 0)
        return arr ;

    int i = 0 ;

    while (i < arr.size() - 1) {

        if (arr[i] > arr[i + 1]) {
            Swap(arr[i] , arr[i + 1]) ;
            i = 0 ;
        }
        else
            i++ ;
    }
    return arr ;
}

vector <int> L(vector<int> arr) {

    if (arr.size() == 1 || arr.size() == 0)
        return arr ;

    int i = 0 ;

    while (i < arr.size() - 1) {

        if (arr[i] < arr[i + 1]) {
            Swap(arr[i] , arr[i + 1]) ;
            i = 0 ;
        }
        else
            i++ ;
    }
    return arr ;
}

vector<int> flip(const char dir, vector<int> arr) {

    switch (toupper(dir)) {
        case 'R' :
            return R(arr) ;
        case 'L' :
            return L(arr) ;
    }

}

//or Directly

vector<int> flip(const char dir, vector<int> arr) {

    switch (toupper(dir)) {
        case 'R' :
            sort(arr.begin() , arr.end()) ;
        case 'L' :
            sort(arr.begin() , arr.end()) ;
            reverse(arr.begin() , arr.end()) ;
    }

    return arr ;
}