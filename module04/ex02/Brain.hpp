#pragma once
#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const &src);
        ~Brain(void);
        Brain &operator=(Brain const &rhs);
        void    showIdeas(void) const;
        void    setIdeas(std::string idea);
};