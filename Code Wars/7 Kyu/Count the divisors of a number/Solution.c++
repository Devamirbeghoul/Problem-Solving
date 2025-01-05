#include <cmath>

using namespace std ;

int divisors(long long n) {
    
    int count = 0;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            count++;
            if (i != n / i) {
                count++;
            }
        }
    }
    return count;
}