#include "HumanB.hpp"

HumanB::HumanB(string str) {
    this->name = str;
}

HumanB::~HumanB(void) {};

void    HumanB::attack(void) {
    cout << this->name << " attacks with their " << this->weapon->getType() << endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}