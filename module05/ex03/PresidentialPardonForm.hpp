#pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "fstream"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);

		void run() const;
		void execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};