#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default Constructor Called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
};

ClapTrap::ClapTrap(std::string name) {
	std::cout << "String Constructor Called" << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
	std::cout << "Copy Constructor Called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amout) {
	this->hit_points -= amout;	
}

std::string ClapTrap::get_name(unsigned int damage) {
	this->takeDamage(damage);
	return this->name;
}

int	ClapTrap::get_hp(void) const {
	return this->hit_points;
}

int	ClapTrap::get_energy(void) const {
	return this->energy_points;
}

int	ClapTrap::get_dmg(void) const {
	return this->attack_damage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs) {
	if (this != &rhs)
		this->name = rhs.name;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (energy_points > 0 && hit_points > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << attack_damage << " points of damage!" << std::endl;
		energy_points--;	
	}
	else
		std::cout << "No more energy..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " has been repaired by " << amount << " hp points" << std::endl;
		hit_points += amount;
		energy_points--;
	}
	else
		std::cout << "No more energy... can't be repaired." << std::endl;
}
