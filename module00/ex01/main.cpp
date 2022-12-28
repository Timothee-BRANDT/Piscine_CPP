#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook Book;
    std::string buff;
	int	i;

	i = 0;
	while ("PhoneBook")
	{
		std::cout << "Please type ADD, SEARCH or EXIT ->";
		std::cin >> buff;
		std::cout << "You typed :" << buff << std::endl;
		if (!buff.compare("ADD"))
		{
			if (i == 8)
				i = 0;
			Book.new_contact(i);
			i++;
		}
		//if (!buff.compare("SEARCH"))
			// search function
		if (!buff.compare("EXIT"))
			break;
	}
	return (0);
}