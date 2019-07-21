#include "Processor.h"

#include <iostream>
#include "Circle.h"
#include "Square.h"

void Processor::process(const Circle& circle)
{
    std::cout << "I am circle with radius = " << circle.radius << std::endl;
}

void Processor::process(const Square& square)
{
    std::cout << "Dum dum dum, I am square" << std::endl;
    std::cout << "    My name is " << square.name << std::endl;
    std::cout << "    I am " << (square.size>10 ? "big" : "small") << " square" << std::endl;


}
