#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	// ClapTrap Clap;
	ScavTrap Scav;

	// Clap.guardGate();
	// ::cout << "HP of Clap = " << Clap.get_hp() << std::endl;
	std::cout << "HP of Scav = " << Scav.get_hp() << std::endl;
	Scav.guardGate();
}
