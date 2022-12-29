#pragma once

#include <iostream>
#include <string>

class Zombie {
    public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void    annonce(void) const;
    private:
    std::string name;
};

Zombie *zombieHorde(int N, std::string name);