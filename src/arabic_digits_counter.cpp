#include "arabic_digits_counter.h"
#include <algorithm>
#include <cctype> 

int count_arabic_digits(const std::vector<char>& input) {
    return std::count_if(input.begin(), input.end(), isdigit);
}