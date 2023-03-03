#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("Player 1");
	ClapTrap b("Player 2");

	std::cout << "a.energy_points = " << a.get_energy() << std::endl;
	a.attack(b.get_name(b.get_dmg()));
	a.attack(b.get_name(b.get_dmg()));
	a.attack(b.get_name(b.get_dmg()));
	a.attack(b.get_name(b.get_dmg()));
	a.attack(b.get_name(b.get_dmg()));
	std::cout << "a.energy_points = " << a.get_energy() << std::endl;
	std::cout << "b.hp = " << b.get_hp() << std::endl;
}
