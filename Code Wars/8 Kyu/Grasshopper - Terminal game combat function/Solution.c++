#include <iostream>

using namespace std ;

int combat(int health, int damage){
  
    return (health <= damage) ? 0 : health - damage ; ;
}