#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const name;
		bool			sign;
		const int		sign_grade;
		const int		exec_grade;
	public:
		Form(void);
		Form(std::string name, bool sign, const int sign_grade, const int exec_grade);
		Form(Form const &rhs);
		virtual	~Form(void);
		Form & operator=(Form const & rhs);
		std::string	get_name(void) const;
		bool		get_sign(void) const;
		int 	get_sign_grade(void) const;
		int		get_exec_grade(void) const;
		void	beSigned(Bureaucrat &c);
		virtual void run() const = 0;
		virtual void execute(Bureaucrat const &executor) const = 0;
	public:
		class GradeTooHighException : public std::exception {
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public :
				const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);