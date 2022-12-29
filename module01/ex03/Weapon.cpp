#include "Weapon.hpp"

Weapon::Weapon(string str) {
    this->type = str;
};

Weapon::~Weapon(void) {};

string&  Weapon::getType(void) {
    string &ref = this->type;
    return ref;
}

void    Weapon::setType(string string) {
    this->type = string;
}