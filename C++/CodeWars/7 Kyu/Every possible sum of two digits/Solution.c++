#include <vector>
#include <string>

using namespace std ;

vector <int> digits(int n) {

    string str = to_string(n) ;
    vector <int> R ;

    for (int i = 0 ; i < str.length() ; i++) {

        for (int j = i + 1 ; j < str.length() ; j++) {

            R.push_back(str[i] + str[j] - 96) ;
        }
    }

    return  R;
}