#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        ~Cat(void);
        void makeSound(void) const;
        void showIdea(void) const;
        void setIdeas(std::string idea);
        Cat &operator=(Cat const &rhs);
    private:
        Brain *brain;
};