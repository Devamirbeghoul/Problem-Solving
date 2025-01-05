#include <vector>

using namespace std ;

unsigned int Min(vector <unsigned int> numbers) {

    unsigned int R = numbers[0] ;

    for (int i = 1 ; i < numbers.size() ; i++) {

        if (R > numbers[i])
            R = numbers[i] ;
    }

    return R ;
}

vector<unsigned int> removeSmallest(vector <unsigned int> numbers) {

    if (numbers.size() == 0)
        return numbers ;
    
    bool Remove = true;
    vector <unsigned int> R ;
    unsigned min = Min(numbers) ;

    for (unsigned int Number : numbers) {
        if (Number == min && Remove) {
            Remove = false ;
            continue;
        }

        R.push_back(Number) ;
    }

    return R ;
}