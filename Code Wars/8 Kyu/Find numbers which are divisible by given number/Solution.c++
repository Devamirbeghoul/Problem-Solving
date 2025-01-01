#include <vector>

using namespace std ;


vector<int> divisible_by(vector<int> numbers, int divisor)
{
    vector <int> R ;

    for (int Number : numbers) {

        if (Number % divisor == 0)
            R.push_back(Number) ;
    }

    return R ;
}