#include<vector>
using namespace std;

int Max(vector <int> numbers) {

    int R = numbers[0] ;

    for (int i = 1 ; i < numbers.size() ; i++) {
        if (R < numbers[i])
            R = numbers[i] ;
    }

    return R ;
}

int Min(vector <int> numbers) {
  
    int R = numbers[0] ;

    for (int i = 1 ; i < numbers.size() ; i++) {
        if (R > numbers[i])
            R = numbers[i] ;
    }

    return R ;
}

int sum(vector<int> numbers) {
  
    if (numbers.size() == 0 || numbers.size() == 1)
        return 0 ;
  
    int R = 0 ;

    for (int Number : numbers)
        R += Number ;
    
    return R - Max(numbers) - Min(numbers) ;
}