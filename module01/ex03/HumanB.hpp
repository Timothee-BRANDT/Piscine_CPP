#include "Weapon.hpp"

class HumanB {
    public:
    HumanB(string str);
    ~HumanB(void);
    void    attack(void);
    void    setWeapon(Weapon &weapon);
    private:
    string name;
    Weapon *weapon;
};