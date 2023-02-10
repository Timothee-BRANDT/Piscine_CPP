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
        virtual void makeSound(void) const;
    protected:
        std::string type;
};