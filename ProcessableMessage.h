#pragma once

#include "Message.h"
#include "Processor.h"

template <typename T>
class ProcessableMessage : public Message
{
public:
    void process(Processor& processor) override
    {
        processor.process(static_cast<T&>(*this));
    }
};
