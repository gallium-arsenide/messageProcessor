#pragma once

#include <string>
#include "ProcessableMessage.h"

class Square : public ProcessableMessage<Square>
{
public:
    std::string name;
    int size;
};

