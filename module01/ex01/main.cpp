#include "Zombie.hpp"

int main()
{
   Zombie *ptr = zombieHorde(10, "Jacques");
    for(int i = 0; i < 10; i++) {
        ptr->annonce();
    }
    delete[] ptr;
    // system("leaks zombie");
}