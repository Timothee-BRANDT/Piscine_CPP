#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &src) {
	if (this != &src)
	*this = src;
	std::cout << "Intern Copy Constructor Called" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern Destructor Called" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs) {
	(void)rhs;
	return (*this);
};

Form *Intern::makeForm(std::string type, std::string target) {
	int	j;
	std::string types[3];

	types[0] = "ShrubberyCreationForm";
	types[1] = "RobotomyRequestForm";
	types[2] = "PresidentialPardonForm";

	for (int i = 0; i < 3; i++) {
		if (types[i] == type)
		j = i;
	}

	switch (j)
	{
	case 0:
		return new ShrubberyCreationForm(type, target);
		break;
	case 1:
		return new RobotomyRequestForm(type, target);
		break;
	case 2:
		return new PresidentialPardonForm(type, target);
		break;
	}
	return NULL;
}