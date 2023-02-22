#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Random"), grade(150) {
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
	std::cout << "Bureaucrat Constructor Called" << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) {
	if (this != &rhs)
		*this = rhs;
};

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat Destructor Called" << std::endl;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	this->grade = rhs.grade;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return this->name;
}

int	Bureaucrat::getGrade(void) const {
	return this->grade;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

void	Bureaucrat::increase(int value) {
	if (grade - value < 1)
		throw GradeTooHighException();
	else
		grade -= value;
}

void	Bureaucrat::decrease(int value) {
	if (grade + value > 150)
		throw GradeTooLowException();
	else
		grade += value;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}

void	Bureaucrat::signForm(Form &f) {
	if (f.get_sign() == true)
		std::cout << name << " signed " << f.get_name() << "." << std::endl;
	else
		std::cout << name << " couldn't sign " << f.get_name() << " because sign is false." << std::endl;
}

void	Bureaucrat::executeForm(Form const &form) {
	if (this->getGrade() > form.get_exec_grade())
		throw GradeTooLowException();
	if (form.get_sign() == false)
		throw Form::FormNotSignedException();
	if (form.get_sign() == true)
	{
		form.run();
		std::cout << this->name << " has execute the formular : " << form.get_name() << "." << std::endl;
	}
}
