#pragma once
#include <iostream>
#include <string>
#define MESSAGE 1;
#define DEBUG 2;
#define INFO 3;
#define WARNING 4;
#define ERROR 5;
using namespace std;

class Harl {
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    private:
        void(Harl::*ptr[4])(void);
        void debug( void ) {
            cout << "{ DEBUG }\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << endl;
        }
        void info( void ) {
            cout << "{ INFO }\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
        }
        void warning( void ) {
            cout << "{ WARNING }\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << endl;
        }
        void error( void ) {
            cout << "{ ERROR }\nThis is unacceptable !I want to speak to the manager now." << endl;
        }
};