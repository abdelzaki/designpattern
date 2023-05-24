#pragma once
#include<string>

class ICharacter{
public:
    virtual std::string getName() = 0;
    virtual std::string getAbility() = 0;


};