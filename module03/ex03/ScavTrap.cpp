#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
};

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap Name Constructor Called" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (energy_points > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "No more energy... can't attack someone." << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate Keeper mode." << std::endl;
}