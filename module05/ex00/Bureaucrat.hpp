#pragma once

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const & rhs);
		std::string	getName(void) const;
		int	getGrade(void) const;
		void	increase(int value);
		void	decrease(int value);
	public:
		class GradeTooHighException : public std::exception {
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);