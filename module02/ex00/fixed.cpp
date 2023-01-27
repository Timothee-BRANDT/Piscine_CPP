#include "fixed.hpp"

Fixed::Fixed(void) {
    cout << "Default constructor called" << endl;
    this->value = 0;
    return ;
};

Fixed::Fixed(Fixed const &src) {
    cout << "Copy constructor called" << endl;
    *this = src;
    return ;
}

Fixed::~Fixed(void) {
    cout << "Default desctuctor called" << endl;
    return ;
};

Fixed& Fixed::operator=(Fixed const & rhs) {
    cout << "Copy assignment operator called" << endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

int Fixed::getRawBits(void) const {
    cout << "getRawBits member function called" << endl;
    return this->value;
}