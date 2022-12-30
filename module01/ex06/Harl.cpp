#include "Harl.hpp"

Harl::Harl(void) {};

Harl::~Harl(void) {};

void    Harl::complain(string level) {
    int i = -1;

    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

	if (!level.compare("DEBUG"))
		i = 1;
	else if (!level.compare("INFO"))
		i = 2;
	else if (!level.compare("WARNING"))
		i = 3;
	else if (!level.compare("ERROR"))
		i = 4;
    
    switch (i) {
        case 1: (this->*ptr[0])(), (this->*ptr[1])(), (this->*ptr[2])(), (this->*ptr[3])();
        break;
        case 2:(this->*ptr[1])(), (this->*ptr[2])(), (this->*ptr[3])();
        break;
        case 3:(this->*ptr[2])(), (this->*ptr[3])();
        break;
        case 4: (this->*ptr[3])();
        break;
        default:
        cout << "[ Probably complaining about insignificant problems. ]" << endl;
    }
}
