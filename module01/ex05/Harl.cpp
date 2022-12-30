#include "Harl.hpp"

Harl::Harl(void) {};

Harl::~Harl(void) {};

void    Harl::complain(string level) {
    string levels[4];

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*ptr[i])();
        }
    }
}