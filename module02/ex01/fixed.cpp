#include "fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
    return ;
};

Fixed::Fixed(Fixed const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}
Fixed::Fixed(const int a) {
    std::cout << "Int constructor called" << std::endl;
    this->value = a << this->fractionnalBits;
}

Fixed::Fixed(float const a) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf((a * (1 << this->fractionnalBits)));
}

Fixed::~Fixed(void) {
    std::cout << "Default desctuctor called" << std::endl;
    return ;
};

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

float Fixed::toFloat(void) const {
    return ((float)this->value / (1 << this->fractionnalBits));
}

int Fixed::toInt(void) const {
    return(this->value >> this->fractionnalBits);
}

int Fixed::getRawBits(void) const {
    return this->value;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}
