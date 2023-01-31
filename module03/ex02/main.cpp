#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap Frag("Frag");
	ScavTrap Scav("Scav");

	std::cout << "Attack of Frag = " << Frag.get_dmg() << std::endl;
	std::cout << "Attack of Scav = " << Scav.get_dmg() << std::endl;
	Frag.highFivesGuys();
	// Scav.highFivesGuys();

	std::cout << "HP of Scav = " << Scav.get_hp() << std::endl;
	Frag.attack(Scav.get_name(Frag.get_dmg()));
	std::cout << "HP of Scav = " << Scav.get_hp() << std::endl;
}
