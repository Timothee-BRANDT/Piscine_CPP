#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook Book;
    std::string buff;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ("PhoneBook")
	{
		std::cout << "Please type ADD, SEARCH or EXIT -> ";
		std::cin >> buff;
		if (!buff.compare("ADD"))
		{
			if (i == 8)
				i = 0;
			Book.new_contact(i);
			i++;
			if (j != 8)
				j++;
		}
		if (!buff.compare("SEARCH"))
			Book.search_contact(j);
		if (!buff.compare("EXIT"))
			break;
	}
	return (0);
}