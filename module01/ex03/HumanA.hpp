#include "Weapon.hpp"

class HumanA {
    public:
    HumanA(void);
    HumanA(string string, Weapon &ref);
    ~HumanA(void);
    void    attack(void);
    private:
    string name;
    Weapon &weapon;
};
