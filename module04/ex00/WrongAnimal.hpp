#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &rhs);
        std::string getType(void) const;
        void makeSound(void) const;

    protected:
        std::string type;
};