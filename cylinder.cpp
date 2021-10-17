// Copyright (c) 2020 Rohnin Barrette All rights reserved.
//
// Created by: Rohnin Barrette
// Created on: Sep 2021
// this program calculates the volume of a cylinder

#include <iostream>

float cylinder_volume(float radius_value_int, float height_value_int) {
    // this function calculates the volume of a cylinder

    float PI = 3.14159265359;
    float volume;

    volume = (PI * (radius_value_int * radius_value_int) * height_value_int);
    return volume;
}

int main() {
    // this function gets radius and height

    std::string radius_value;
    std::string height_value;
    float volume_value;
    float radius_value_int;
    float height_value_int;

    // input
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius_value;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height_value;
    std::cout << "" << std::endl;

    // process
    try {
        radius_value_int = std::stof(radius_value);
        height_value_int = std::stof(height_value);
        volume_value = cylinder_volume(radius_value_int, height_value_int);
        if (radius_value_int < 0) {
            std::cout
            << "Radius is lower than 0, please enter a positive number."
            << std::endl;
        } else if (height_value_int < 0) {
            std::cout
            << "Height is lower than 0, please enter a positive number."
            << std::endl;
        } else {
            std::cout << "The volume of the cylinder is "
            << volume_value << "³";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
