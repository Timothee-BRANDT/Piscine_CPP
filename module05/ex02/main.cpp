#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// try
	// {
	// 	Bureaucrat bureaucrat("Michel", 50);
	// 	ShrubberyCreationForm Shrub("Bear", "jardin");
	// 	// bureaucrat.executeForm(Shrub); // can't execute the formular because he's not already signed -> throw not signed exception
	// 	Shrub.beSigned(bureaucrat);
	// 	bureaucrat.executeForm(Shrub); // should now execute it because he's now signed
	// }
	// catch(const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	// try
	// {
	// 	Bureaucrat b("michel", 45);
	// 	RobotomyRequestForm robot("robot", "perceuse");
	// 	robot.beSigned(b);
	// 	b.executeForm(robot);
	// }
	// catch(const std::exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	try
	{
		Bureaucrat b("Michel", 5);
		PresidentialPardonForm president("president", "forgive");
		president.beSigned(b);
		b.executeForm(president);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
