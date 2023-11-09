//
// Created by Rachel on 09/10/2023.
//
#include <iostream>
#include <iomanip>
#ifndef ASSIGN56_CIRCLE_H
class circle{
public:
    void initialise();
    void display_area();
protected:
    float pi = 3.1416;
    int radius;
    float area;

};

void circle::initialise() {
    char terminator;
    std::cout << "Enter Radius" ;
    std::cin.get(radius);
    std::cin.get(terminator);
}
void circle::display_area() {
    area = pi * radius * radius;
    std::cout << area;
}
#define ASSIGN56_CIRCLE_H

#endif //ASSIGN56_CIRCLE_H
