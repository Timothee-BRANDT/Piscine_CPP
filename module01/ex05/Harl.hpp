#pragma once
#include <iostream>
#include <string>
using namespace std;

class Harl {
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void(Harl::*ptr[4])(void);
        void debug( void ) {
            cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << endl;
        }
        void info( void ) {
            cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
        }
        void warning( void ) {
            cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
        }
        void error( void ) {
            cout << "This is unacceptable !I want to speak to the manager now." << endl;
        }
};
