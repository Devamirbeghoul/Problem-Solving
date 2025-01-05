#include <string>
using namespace std ;

bool feast(string beast, string dish){

    return beast[0] + beast[beast.length() - 1] == dish[0] + dish[dish.length() - 1] ;
}