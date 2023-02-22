#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Random", false, 25, 5), target("Jardin"){
	std::cout << "Presidential Default Constructor Called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, false, 25, 5), target(target){
	std::cout << "Presidential Parameters Constructor Called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src){
	std::cout << "Presidential Copy Constructor Called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "Presidential Destructor Called" << std::endl;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		target = rhs.target;
	}
	return (*this);
}

void PresidentialPardonForm::run() const {
	std::cout << target << " has beed forgiven by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() <= Form::get_exec_grade())
		PresidentialPardonForm::run();
	else
		throw GradeTooLowException();
}