#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        ~Cat(void);
        void makeSound(void) const;

    private:
        Cat &operator=(Cat const &rhs);
};