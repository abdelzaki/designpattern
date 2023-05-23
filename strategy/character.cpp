#include "attachbehaviour.hpp"
#include "character.hpp"

Character::Character(const std::string &name, const std::string &ability, std::shared_ptr<IAttachbehaviour> attackBehaviour) : m_ability{ability}, m_name{name}, m_attackBehaviour{attackBehaviour}
{
}

std::string Character::getName()
{
    return m_name;
}

std::string Character::getAbility()
{
    return m_ability;
}

void Character::attack()
{
    m_attackBehaviour->attack(shared_from_this());
}
