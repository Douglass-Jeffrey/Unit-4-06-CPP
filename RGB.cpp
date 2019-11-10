// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Oct 2019
// This program  lists every rgb combination

#include <iostream>

main() {
    // this function lists every rgb combination
    // variables
    int red;
    int green;
    int blue;

    // process
    for (red = 0; red < 255; red++) {
        for (green = 0; green < 255; green++) {
            for (blue = 0; blue < 255; blue++) {
                // output
                std::cout << "RGB= " << red << ", " << green << ", " << blue <<
                            std::endl;
            }
        }
    }
}
