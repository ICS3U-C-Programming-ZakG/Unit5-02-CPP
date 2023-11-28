// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Nov. 28, 2023
// This program calculates the area of a triangle.

#include <iostream>
#include <string>
#include <iomanip>

void CalcArea(float base, float height) {
    // declare area variable
    float area;

    // calculate area
    area = base * height / 2;

    // display area
    std::cout << "The area of a triangle with a base of " << base;
    std::cout << "cm and a height of " << height << "cm is ";
    std::cout << std::fixed << std::setprecision(2) << std::setfill('0');
    std::cout << area << "cm^2" << std::endl;
}

int main () {
    // introduce program to user
    std::cout << "This program calculates the area of a triangle.\n";

    // declare variables
    std::string baseStr, heightStr;
    float baseFloat, heightFloat;

    // get user inputs
    std::cout << "Please enter a positive base: ";
    std::cin >> baseStr;
    std::cout << "Please enter a positive height: ";
    std::cin >> heightStr;

    // try converting first input to float
    try {
        baseFloat = std::stof(baseStr);

        // try converting second input to float
        try {
            heightFloat = std::stof(heightStr);

            // check if numbers greater than zero
            if (baseFloat >0 && heightFloat > 0) {
                // call function
                CalcArea(baseFloat, heightFloat);

            // tell user no negatives
            } else {
                std::cout << "You must enter two positive numbers\n";
            }

        // catch invalid inputs
        } catch (std::invalid_argument) {
            std::cout << "" << heightStr << " is not";
            std::cout << "a positive number.\n " << std::endl;
        }

    // catch invalid inputs
    } catch (std::invalid_argument) {
        std::cout << "" << baseStr << " is not";
        std::cout << "a positive number.\n " << std::endl;
    }
}
