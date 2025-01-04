#include <string>

using namespace std ;

string find_screen_height(int width, const string ratio) {

    int i = ratio.find(":") ;

    int x = stoi(ratio.substr(0 , i)) ;
    int y = stoi(ratio.substr(i + 1)) ;

    int Heigh = width * y / x ;

    return to_string(width) + "x" + to_string(Heigh) ;
}