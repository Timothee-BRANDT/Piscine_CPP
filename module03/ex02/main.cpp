#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap Frag("Frag");
	ScavTrap Scav("Scav");

	std::cout << "HP of Frag = " << Frag.get_hp() << std::endl;
	Scav.attack(Frag.get_name(Scav.get_dmg()));
	std::cout << "HP of Frag = " << Frag.get_hp() << std::endl;

	std::cout << "HP of Scav = " << Scav.get_hp() << std::endl;
	Frag.attack(Scav.get_name(Frag.get_dmg()));
	std::cout << "HP of Scav = " << Scav.get_hp() << std::endl;


	Frag.highFivesGuys();
}
