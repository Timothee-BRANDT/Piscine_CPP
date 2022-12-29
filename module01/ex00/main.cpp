#include "Zombie.hpp"

int main()
{
	Zombie *jacques = newZombie("Jacques");
	jacques->announce();
	randomChump("Jacques le saint");
	delete jacques;
}
