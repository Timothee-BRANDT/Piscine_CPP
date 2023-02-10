#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std:: string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);
		void	guardGate(void);
		void	attack(const std::string &target);
	private:
};
