#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of stack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);



	std::cout << "\n" << std::endl;


	std::list<int> lol;
	lol.push_back(5);
	lol.push_back(17);
	std::cout << "Top of stack: " << lol.back() << std::endl;
	lol.pop_back();
	std::cout << "Size of stack: " << lol.size() << std::endl;
	lol.push_back(3);
	lol.push_back(5);
	lol.push_back(737);
	//[...]
	lol.push_back(0);
	std::list<int>::iterator it_lst = lol.begin();
	std::list<int>::iterator ite_lst = lol.end();
	++it_lst;
	--it_lst;
	while (it_lst != ite_lst)
	{
		std::cout << *it_lst << std::endl;
		++it_lst;
	}
	// std::stack<int> aha(lol);
}