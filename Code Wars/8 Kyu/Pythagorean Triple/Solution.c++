bool PythagoreanTriple(const int a, const int b, const int c)
{
    a *= a ;
    b *= b ;
    c *= c ;
    
    return b + c == a || a + b == c || a + c == b;
}