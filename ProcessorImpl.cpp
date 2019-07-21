#include "ProcessorImpl.h"

#include <iostream>
#include "Circle.h"
#include "Square.h"

void ProcessorImpl::process(const Circle& circle)
{
    std::cout << "I am circle with radius = " << circle.radius << std::endl;
}

void ProcessorImpl::process(const Square& square)
{
    std::cout << "Dum dum dum, I am square" << std::endl;
    std::cout << "    My name is " << square.name << std::endl;
    std::cout << "    I am " << (square.size>10 ? "big" : "small") << " square" << std::endl;


}
