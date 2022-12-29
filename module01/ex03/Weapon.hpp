#pragma once

#include <iostream>
#include <string>
using namespace std;

class Weapon {
    public:
    Weapon(void);
    Weapon(string str);
    ~Weapon(void);
    string      &getType(void);
    void		setType(string string);
    private:
    string type;
};
