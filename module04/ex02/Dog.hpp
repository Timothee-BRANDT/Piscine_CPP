#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
    Dog(void);
    Dog(Dog const &src);
    ~Dog(void);
    void makeSound(void) const;

    private:
    Dog &operator=(Dog const &rhs);
    Brain *brain;
};
