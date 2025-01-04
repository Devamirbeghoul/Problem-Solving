int divisors(long long n) {
    
    int R = 1 ;

    for (int i = 2 ; i <= n/2 ; i++) {
        if (n % i == 0)
            R++ ;
    }

    return (n == 1) ? R : R + 1 ;
}