#include "Zombie.hpp"

int main()
{
    Zombie *first_zombie = newZombie("first_zombie");
    first_zombie->annonce();
    randomChump("random_zombie"); // static allocation always call his destructor
    delete(first_zombie); // dynamic allocation must be delete to call his desructor
}
