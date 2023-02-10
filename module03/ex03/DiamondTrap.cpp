#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap Name Constructor Called" << std::endl;
    this->name = name;
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(std::string str) {
    ScavTrap::attack(str);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap name : " << name << std::endl;
    std::cout << "ClapTrap name : " << ClapTrap::name << std::endl;
}