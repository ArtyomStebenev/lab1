#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <exception>
#include <stdexcept>
#include "arabic_digits_counter.h"


int main() {
    bool flag = false;

    do {
        try {

            std::string input_string;
            char choice = 'Y';

            std::cout << "Hello, User! This program can count Arabic digits in string." << std::endl;

            while (choice == 'Y' || choice == 'y') {
            
                std::cout << "\nEnter a string: ";
                std::getline(std::cin, input_string);

                std::vector<char> input_vector(input_string.begin(), input_string.end());
                int digit_count = count_arabic_digits(input_vector);

                std::cout << "Digits quantity: " << digit_count << std::endl;

                std::cout << "Do you want to continue? (Y/N): ";
                std::cin >> choice;
                std::cin.ignore();      // Clear the input buffer
                flag = false;           //no error occured
            }

        } catch (const std::exception& e) {
                std::cerr << "An error occurred: " << e.what() << std::endl;
                std::cin.clear();
                flag = true;
        }
    } while(flag);

    std::cin.get(); //press Enter to exit programm

    return 0;
}