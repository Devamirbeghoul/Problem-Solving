#include <string>

using namespace std ;

string to24HourTime(int hour, int minute, string period) {

    if (period != "am")
        hour += 12 ;

    if (hour % 12 == 0)
        hour = (period != "am" ? 12 : 0) ;
        
    string Hour = (hour / 10 == 0 ? "0" : "") + to_string(hour) ;
    string Minute = (minute / 10 == 0 ? "0" : "") + to_string(minute) ;

    return Hour + Minute ;

}