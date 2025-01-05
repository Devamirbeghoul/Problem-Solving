#include <string>

using namespace std ;

bool IsVowel(char C) {

    return (C == 'a' || C == 'e' || C == 'u' || C == 'o' || C == 'i') ;
}

string remove_vowels(const std::string& str) {
  
    string R = "" ;

    for (char C : str) {

        if (!IsVowel(C))
            R += C ;
    }

    return R ;
}