#include "character.hpp"
#include "attachbehaviour.hpp"
#include <iostream>

int main()
{

    auto sword = std::make_shared<Attachbehaviour>("using sword");
    auto james = std::make_shared<Character>("james", "running", sword);
    james->attack();
    std::cout << " -- \n";
    sword->attack(james);
}
