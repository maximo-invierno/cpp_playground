#include <vector>
#include <unordered_map>
#include <utility>
#include <stdexcept>

#include "two_sum.hpp"

std::vector<int> two_sum(const std::vector<int>& numbers, int target) {
    // Create hash map of the compliment of the numbers which are traversed.
    std::unordered_map<int, int> compliment_numbers = {};

    for(int i = 0; i<numbers.size(); i++) {
        if(compliment_numbers.contains(numbers[i])) {
            return {compliment_numbers.at(numbers[i]), i};
        }
        
        const int compliment = target - numbers[i];
        compliment_numbers.insert(std::make_pair(compliment, i));
    }

    throw std::runtime_error("Solution does not exist.");
}