#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(DiamondTrap const &rhs);
    ~DiamondTrap();

    void attack(std::string str);
    void whoAmI();

private:
    std::string name;
};