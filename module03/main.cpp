#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a("Player 1");
	ClapTrap b("Player 2");

	// 5 attack
	a.attack(b.get_name(2));
	a.attack(b.get_name(2));
	a.attack(b.get_name(2));
	a.attack(b.get_name(2));
	a.attack(b.get_name(2));
	std::cout << "a.energy_points = " << a.get_energy() << std::endl;
	std::cout << "b.hp = " << b.get_hp() << std::endl;
}

