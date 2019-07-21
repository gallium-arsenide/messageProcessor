#pragma once

class Circle;
class Square;

class Processor
{
public:
    virtual ~Processor() = default;
    void process(const Circle&);
    void process(const Square&);
};

