#pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "fstream"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);

		void run() const;
		void execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};