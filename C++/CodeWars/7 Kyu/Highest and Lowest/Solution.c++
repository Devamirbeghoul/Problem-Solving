#include <sstream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std ;

string highAndLow(const std::string& numbers){

    stringstream ss(numbers);
    vector<int> nums;
    int num;

    while (ss >> num) {
        nums.push_back(num);
    }

    int highest = *max_element(nums.begin(), nums.end());
    int lowest = *min_element(nums.begin(), nums.end());

    return to_string(highest) + " " + to_string(lowest);
}