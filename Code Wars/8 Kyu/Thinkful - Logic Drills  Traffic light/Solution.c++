#include <string>

using namespace std ;

string update_light(string current) {

    switch (current[0]) {
        case 'r' :
            return "green" ;
        case 'g' :
            return "yellow" ;
        case 'y' :
            return "red" ;
    }
}