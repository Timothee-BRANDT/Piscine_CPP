#include "HumanA.hpp"

HumanA::HumanA(string string, Weapon &ref) : weapon(ref) {
    this->name = string;
}

HumanA::~HumanA(void) {};

void    HumanA::attack(void) {
    cout << this->name << "attacks with their " << this->weapon.getType() << endl;
}