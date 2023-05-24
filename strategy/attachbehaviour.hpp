#pragma once

#include "iattachbehaviour.hpp"

class Attachbehaviour : public IAttachbehaviour
{
public:
    Attachbehaviour(std::string name);
    virtual void attack(std::shared_ptr<ICharacter> character) override;

protected:
    std::string m_name;
};
