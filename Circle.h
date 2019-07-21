#pragma once

#include "ProcessableMessage.h"

class Circle : public ProcessableMessage<Circle>
{
public:
    double radius;
};

