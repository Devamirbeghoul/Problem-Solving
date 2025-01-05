#include <string>

using namespace std ;

string gimme_the_letters(string sp) {

    if (sp[0] == sp[2])
        return sp.substr(0 , 1) ;

    string R = "" ;
    
    for (int i = sp[0] ; i <= sp[2] ; i++)
        R += char(i) ;

    return R ;
}