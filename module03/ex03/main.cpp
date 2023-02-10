#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	DiamondTrap a("Pseudo");
	a.whoAmI();
	a.guardGate();
	a.highFivesGuys();

	a.attack("b");
}
