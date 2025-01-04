long long reverseNumber(long long n) {

    long long R = 0 ;

    while (n != 0) {

        R = (R * 10) + n % 10 ;

        n /= 10 ;
    }

    return R ;
}