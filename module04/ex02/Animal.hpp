#pragma once
#include <string>
#include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(Animal const &src);
        virtual ~Animal(void);
        Animal &operator=(Animal const &rhs);
        std::string getType(void) const;
        virtual void makeSound(void) const = 0; // = 0 mean this fonction NEED to be superseded in the sub-class of Animal like Dog or Cat, i now can't instance Animal
    protected:
        std::string type;
};
