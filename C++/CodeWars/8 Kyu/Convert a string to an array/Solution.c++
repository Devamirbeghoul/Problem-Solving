#include <vector>
#include <string>

using namespace std ;

vector<string> string_to_array(string s) {
    
    if (s == "")
        return {""""} ;

    vector <string> vStrings ;

    string R = "";

    for (char C : s) {
        
        if (C == ' ') {
            vStrings.push_back(R) ;
            R = "" ;
        }
        else
            R += C ;
    }

    vStrings.push_back(R) ;

    return vStrings ;
}
