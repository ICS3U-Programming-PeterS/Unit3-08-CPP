// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks for the users age and tells you if you could
// date their grandchild
#include <iostream>
#include <iomanip>

int main() {
    // declare variables
    std::string yearAsAString;
    int year;

    // Get the year as a string
    std::cout << "Please enter a year: ";
    std::cin >> yearAsAString;

    // try catch to make sure year is an integer
    try {
        // convert year_as_a_string into year
        year = std::stoi(yearAsAString);

        // if year mod 4 is equal to 0
        if (year % 4 == 0) {
            // if year mod 100 is equal to 0
            if (year % 100 == 0) {
                // if year mod 400 is equal to 0
                if (year % 400 == 0) {
                    std::cout << year << " is definitely a leap year!";
                } else {
                    std::cout << year << " is not a leap year.";
                }
            } else {
                std::cout << year << " is definitely a leap year!";
            }
        } else {
            std::cout << year << " is not a leap year.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input!";
    }
    // print final message
    std::cout << "\n \nDone.";
}
