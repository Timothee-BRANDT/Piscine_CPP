#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Random", false, 145, 137), target("Jardin"){
	std::cout << "Shrubbery Default Constructor Called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, false, 145, 137), target(target){
	std::cout << "Shrubbery Parameters Constructor Called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src){
	std::cout << "Shrubbery Copy Constructor Called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "Shrubbery Destructor Called" << std::endl;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		target = rhs.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::run() const {
	std::ofstream file(target + "_shrubbery");
	if (file.is_open())
	{
		file << "  * " << std::endl;
		file << " /..\\" << std::endl;
		file << " /o..\\" << std::endl;
		file << " /..o..\\" << std::endl;
		file << " /.o..o.\\" << std::endl;
		file << " /...o...\\" << std::endl;
		file << " /..o....o\\" << std::endl;
		file << "  ^^[_]^^  " << std::endl << std::endl;
		file << "  * " << std::endl;
		file << " /..\\" << std::endl;
		file << " /o..\\" << std::endl;
		file << " /..o..\\" << std::endl;
		file << " /.o..o.\\" << std::endl;
		file << " /...o...\\" << std::endl;
		file << " /..o....o\\" << std::endl;
		file << "  ^^[_]^^  " << std::endl;
		file.close();
	}
	else
		std::cout << "Cant open the Shrubbery File" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() <= Form::get_exec_grade())
		ShrubberyCreationForm::run();
	else
		throw GradeTooLowException();
}