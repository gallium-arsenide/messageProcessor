#pragma once

class Circle;
class Square;

class Processor
{
public:
    virtual ~Processor() = default;
    virtual void process(const Circle&) = 0;
    virtual void process(const Square&) = 0;
};

