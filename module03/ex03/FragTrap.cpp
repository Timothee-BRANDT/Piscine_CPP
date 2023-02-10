#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
};

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name Constructor Called" << std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High Fives?" << std::endl;
}