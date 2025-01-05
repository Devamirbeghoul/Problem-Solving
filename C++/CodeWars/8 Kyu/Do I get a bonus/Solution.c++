#include<string>
using namespace std;

string bonus_time(int salary, bool bonus) {

    return  "$" + to_string(bonus ? salary * 10 : salary) ;
}