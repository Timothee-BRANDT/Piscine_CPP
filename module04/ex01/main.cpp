#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *lol[6];
    for (int i = 0; i < 6; i++)
    {
        if (i % 2)
            lol[i] = new Cat();
        else
            lol[i] = new Dog();
    }
    for (int i = 0; i < 6; i++)
    {
        std::cout << "type :" << lol[i]->getType() << std::endl;
        lol[i]->makeSound();
    }
    for (int i = 0; i < 6; i++)
        delete lol[i];

    // deep copy tester

    // Cat chat1;
    // Cat chat2;

    // chat1.setIdeas("CHATTE");
    // chat2.setIdeas("CHATON");

    // chat1.showIdea();
    // chat2.showIdea();

    // chat1 = chat2;

    // chat1.showIdea();
    // chat2.showIdea();

    // system("leaks animal");
}
