#include "Form.hpp"

Form::Form(void) : name("Random_Form"), sign(false), sign_grade(50), exec_grade(25) {
	std::cout << "Form Default Constructor Called" << std::endl;
};

Form::Form(std::string name, bool sign, const int sign_grade, const int exec_grade ) : name(name), sign_grade(sign_grade), exec_grade(exec_grade) {
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	else
		this->sign = sign;
	std::cout << "Form Constructor Called" << std::endl;
};

Form::Form(Form const &rhs) : sign_grade(rhs.get_sign_grade()), exec_grade(rhs.get_exec_grade()) {
	if (this != &rhs)
		*this = rhs;
};

Form::~Form(void) {
	std::cout << "Form Destructor Called" << std::endl;
};

Form &Form::operator=(Form const &rhs) {
	this->sign = rhs.sign;
	return (*this);
}

const char	*Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

const char	*Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}

const char	*Form::FormNotSignedException::what() const throw() {
    return ("The formular is not signed.");
}

std::string Form::get_name(void) const {
	return this->name;
}

bool Form::get_sign(void) const {
	return this->sign;
}

int Form::get_sign_grade(void) const {
	return this->sign_grade;
}

int Form::get_exec_grade(void) const {
	return this->exec_grade;
}

void	Form::beSigned(Bureaucrat &c) {
	if (c.getGrade() <= sign_grade)
	{
		sign = true;
		std::cout << "Formular : " << name << " is now signed." << std::endl;	
	}
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << "***** Formular Informations *****" << std::endl;
	o << "Form : " << rhs.get_name() << " | signed type : " << rhs.get_sign() << std::endl;
	o << "sign_grade : " << rhs.get_sign_grade() << " | exec_grade : " << rhs.get_exec_grade() << std::endl;
	o << "*********************************" << std::endl;
	return o;
}
