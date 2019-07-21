#pragma once

class Processor;

class Message
{
public:
    virtual ~Message() = default;
    virtual void process(Processor&) = 0;
};

