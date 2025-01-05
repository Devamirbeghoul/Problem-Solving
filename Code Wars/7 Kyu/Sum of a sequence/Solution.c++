int sequenceSum(int start, int end, int step)
{
    if (start > end)
        return 0 ;
    
    int R = 0 ;

    for (int i = start ; i <= end ; i += step) {

        R += i ;
    }

    return R ;
}