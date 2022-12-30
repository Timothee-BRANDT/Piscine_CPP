#include "fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    cout << a.getRawBits() << endl;
    cout << b.getRawBits() << endl;
    // b.setRawBits(50);
    // cout << b.getRawBits() << endl;
    cout << c.getRawBits() << endl;
    // c = b;
    // cout << c.getRawBits() << endl;
    return (0);
}
