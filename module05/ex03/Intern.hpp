#pragma once

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		Intern & operator=(Intern const & rhs);
		Form *makeForm(std::string type, std::string target);
	private:
};
