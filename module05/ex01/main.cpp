#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("Michel", 30); // change to grade 60 won't allow michel to sign the convocation
		Form f("convocation", false, 50, 25);
		std::cout << f;
		b.signForm(f); // can't sign because sign is false
		f.beSigned(b); // set sign to true because Michel is grade 40
		b.signForm(f); // michel can now sign the convocation
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}
