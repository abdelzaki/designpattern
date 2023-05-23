#pragma once
#include "character.hpp"

class IAttachbehaviour
{

public:
    virtual void attack(std::shared_ptr<Character> character) = 0;
};
