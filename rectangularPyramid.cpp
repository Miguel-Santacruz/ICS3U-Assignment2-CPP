// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Mar 2022
// This program calculates the surface area and
//    volume of a rectangular pyramid

#include <iostream>
#include <cmath>

int main() {
    // This function calculates volume and surface area

    int height;
    int length;
    int volume;
    int surfaceArea;

    // Input
    std::cout << "Enter height of pyramid (cm): ";
    std::cin >> height;
    std::cout << "Enter length of pyramid (cm): ";
    std::cin >> length;

    // Process
    volume = height * pow(length, 2) * 1/3;
    surfaceArea = pow(length, 2)
    + (2 * length * sqrt((pow(length, 2) / 4) + pow(height, 2)));

    // Output
    std::cout << std::endl;
    std::cout << "Volume: " << volume << " cm³." << std::endl;
    std::cout << "Surface area " << surfaceArea << " cm²." << std::endl;

    std::cout << "\nDone" << std::endl;
}
