#include <memory>
#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Processor.h"

std::unique_ptr<Circle> makeCircle(double radius)
{
    auto circle = std::make_unique<Circle>();
    circle->radius = radius;
    return circle;
}

std::unique_ptr<Square> makeSquare(const std::string& name, int size)
{
    auto square = std::make_unique<Square>();
    square->name = name;
    square->size = size;
    return square;
}

int main()
{
    std::vector<std::unique_ptr<Message>> messages;
    messages.emplace_back(makeCircle(12));
    messages.emplace_back(makeSquare("John", 5));
    messages.emplace_back(makeSquare("Mike", 15));
    messages.emplace_back(makeCircle(3.14));

    Processor processor;

    for (const auto& message : messages)
    {
        message->process(processor);
    }

    return 0;
}
