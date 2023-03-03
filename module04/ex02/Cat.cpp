#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat Constructor Called" << std::endl;
    type = "Cat";
    brain = new Brain();
    return ;
}

Cat::Cat(Cat const &rhs)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
    type = rhs.type;
    brain = new Brain();
    *this->brain = *rhs.brain;
    return;
}

Cat::~Cat(void)
{
    std::cout << "Cat Destructor Called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(Cat const &rhs) {
    Animal::operator=(rhs);
    delete brain;
    brain = new Brain();
    *brain = *rhs.brain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "cat noise" << std::endl;
}

void Cat::setIdeas(std::string idea)
{
    brain->setIdeas(idea);
}

void Cat::showIdea(void) const {
    brain->showIdeas();
}
