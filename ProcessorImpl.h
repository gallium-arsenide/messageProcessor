#pragma once

#include "Processor.h"

class ProcessorImpl : public Processor
{
public:
    void process(const Circle&) override;
    void process(const Square&) override;
};

