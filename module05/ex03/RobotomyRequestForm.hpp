#pragma once

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "fstream"
#include <cstdlib>

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);

		void run() const;
		void execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};