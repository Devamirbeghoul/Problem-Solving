#include <algorithm>

using namespace std ;

unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    unsigned short int Number = max({a * b * c , a + b * c , (a + b) * c , a * (b + c) , a + b + c}) ;

    return Number ;

    //I like this too

    /*unsigned short int max=0;
       if((a+b+c)>max)max=a+b+c;
       if((a+b)*c>max)max=(a+b)*c;
       if(((a*b)+c)>max)max=(a*b)+c;
       if(a*(b+c)>max)max=a*(b+c);
       if(a*b*c>max)max=a*b*c;
       return max;*/
}