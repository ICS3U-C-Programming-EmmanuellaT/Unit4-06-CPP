// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 21st Nov,2026
// This program gets input that determines the RGB colour-code limits.

#include <iostream>

int main() {
    int redInput;
    int greenInput;
    int blueInput;

    std::cout << "Enter a number for red: ";
    std::cin >> redInput;

    std::cout << "Enter a number for green: ";
    std::cin >> greenInput;

    std::cout << "Enter a number for blue: ";
    std::cin >> blueInput;

    for (int red = 0; red <= redInput; red++) {
        for (int green = 0; green <= greenInput; green++) {
            for (int blue = 0; blue <= blueInput; blue++) {
                std::cout
                    << "\033[38;2;" << red << ";" << green << ";" << blue
                    << "mRGB(" << red << ", " << green << ", " << blue
                    << ") \033[38;2;255;255;255m\n";
            }
        }
    }

    return 0;
}
