#ifndef ARABIC_DIGITS_COUNTER_H
#define ARABIC_DIGITS_COUNTER_H

#include <vector>
#include <algorithm>
#include <cctype>

#ifdef _WIN32
#   define LIB_EXPORT __declspec(dllexport)
#else
#   define LIB_EXPORT
#endif

int LIB_EXPORT count_arabic_digits(const std::vector<char>& input);

#endif