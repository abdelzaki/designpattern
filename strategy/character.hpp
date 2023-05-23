

#pragma once
#include <string>
#include <memory>

class IAttachbehaviour;
class Character : public std::enable_shared_from_this<Character>
{
public:
    Character(const std::string &name, const std::string &ability, std::shared_ptr<IAttachbehaviour> attackBehaviour);

    std::string getName();
    std::string getAbility();
    void attack();

protected:
    std::string m_name;
    std::string m_ability;
    std::shared_ptr<IAttachbehaviour> m_attackBehaviour;
};
