#pragma once

#include <string>
#include <iostream>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		ClapTrap 	&operator=(ClapTrap const & rhs);
		ClapTrap 	&operator--(void);
		std::string get_name(unsigned int damage);
		int		get_hp(void) const;
		int		get_energy(void) const;
		unsigned int		get_dmg(void) const;
		void	set_damage(int damage);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amout);
		void	beRepaired(unsigned int amout);
	protected:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
};

