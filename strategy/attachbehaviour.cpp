#include <iostream>
#include "attachbehaviour.hpp"

Attachbehaviour::Attachbehaviour(std::string name) : m_name{name}
{
}

void Attachbehaviour::attack(std::shared_ptr<Character> character)
{
     std::cout<< character->getName()   << " good at " << character->getAbility() << " attack with "
               << " -> "  << m_name << " \n";
}
