#include <iostream>

using namespace std ;

string greet(string name) 
{
    return (name == "Johnny") ? "Hello, my love!" : "Hello, " + name + "!"; 
}