#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain(Brain const &rhs)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = rhs.ideas[i];
    std::cout << "Brain Copy Constructor Called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor Called" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs) {
    for (int i = 0; i < 100; i++){
        ideas[i] = rhs.ideas[i];
    }
    return *this;
}

void    Brain::showIdeas(void) const {
    std::cout << "Idea: " << ideas[0] << std::endl;
}

void    Brain::setIdeas(std::string idea){
    ideas[0] = idea;
}