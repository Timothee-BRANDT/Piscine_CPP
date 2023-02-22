#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Random", false, 72, 45), target("Jardin"){
	std::cout << "Robotomy Default Constructor Called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, false, 72, 45), target(target){
	std::cout << "Robotomy Parameters Constructor Called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src){
	std::cout << "Robotomy Copy Constructor Called" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "Robotomy Destructor Called" << std::endl;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		target = rhs.target;
	}
	return (*this);
}

void RobotomyRequestForm::run() const {

 	std::srand(std::time(nullptr));
	int number = std::rand();
	std::cout << "Bvvvvvvvvvvvvvvvvvvvv" << std::endl;
	if (number % 2)
		std::cout << target << " has been succesfully robotomised with a 1/2 chance." << std::endl;
	else
		std::cout << "Robotomisation failed, try again." << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() <= Form::get_exec_grade())
		RobotomyRequestForm::run();
	else
		throw GradeTooLowException();
}