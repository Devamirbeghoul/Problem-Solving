#include <cctype>
#include <string>
using namespace std;

bool IsVowel(char C) {

    C = tolower(C) ;
    return C == 'a' || C == 'e' || C == 'i' || C == 'u' || C == 'o' ;
}

string replace(const string &s)
{
    string R = "" ;

    for (char C : s) {
        if (IsVowel(C))
            R += '!' ;
        else
            R += C ;
    }

    return R ;
}