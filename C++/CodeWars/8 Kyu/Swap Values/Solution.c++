#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
  
    int Temp = values.first ;
    values.first = values.second;
    values.second = Temp;

    return values ;
}