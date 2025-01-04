#include <string>
#include <stack>

using namespace std ;

bool validParentheses(const std::string& str) {

    if (str.empty())
        return true ;

    stack <int> S ;

    for (int i = 0 ; i < str.size() ; i++) {

        if (str[i] == '(')
           S.push(str[i]) ;
        else {
            if (S.empty())
                return false ;
            else
                S.pop() ;
        }
    }

    return S.empty() ;
}