// Copyright (c) 2021 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Nov 2021
// Grandmother age approval

#include <iostream>
#include <string>

int main() {
    // function for grandmother age approval

    // define variables
    std::string integerAsString;
    int age;

    // input
    std::cout << "Please enter your age: " ;
    std::cin >> integerAsString;

    // process & output
    try {
        age = std::stoi(integerAsString);
        if (age > 40 || age < 25) {
            std::cout << "You are NOT an acceptable age" << std::endl;
        } else {
            std::cout << "You are an acceptable age" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << integerAsString << " is not an integer" 
        << std::endl;
    }

    // output 
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}