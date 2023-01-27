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
    // this->value = a << this->fractionnalBits;
    value = a;
}

Fixed::Fixed(float const a) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf((a * (1 << this->fractionnalBits)));
}

Fixed::~Fixed(void) {
    std::cout << "Default desctuctor called" << std::endl;
    return ;
};

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

Fixed& Fixed::operator=(Fixed const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->value = rhs.getRawBits();
    return *this;
}

int Fixed::operator<(Fixed const & rhs) const {
    if (value < rhs.getRawBits())
        return (1);
    else
        return (0);
}

bool    Fixed::operator<=(Fixed const & rhs) {
    if (value <= rhs.getRawBits())
        return (1);
    else
        return (0);
}

int Fixed::operator>(Fixed const & rhs) const {
    if (value > rhs.getRawBits())
        return (1);
    else
        return (0);
}

bool    Fixed::operator>=(Fixed const & rhs) {
    if (value >= rhs.getRawBits())
        return (1);
    else
        return (0);
}

bool    Fixed::operator!=(Fixed const & rhs) {
    if (value != rhs.getRawBits())
        return (1);
    else
        return (0);
}

bool    Fixed::operator==(Fixed const & rhs) {
    if (value == rhs.getRawBits())
        return (1);
    else
        return (0);
}

Fixed &Fixed::operator+(Fixed const & rhs) {
    value = value + rhs.getRawBits();
    return *this;
}

Fixed &Fixed::operator-(Fixed const & rhs) {
    value = value - rhs.getRawBits();
    return *this;
}

Fixed &Fixed::operator*(Fixed const & rhs) {
    this->value = (this->value * rhs.value);
    return *this;
}

Fixed &Fixed::operator/(Fixed const & rhs) {
    value = (value / rhs.value);
    return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
    o << rhs.toFloat();
    return o;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(value);
    value++;
    return tmp;
}

Fixed &Fixed::operator++(void) {
    value++;
    return  *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(value);
    value--;
    return tmp;
}

Fixed &Fixed::operator--(void) {
    value--;
    return  *this;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {
    if (a > b)
        return (a);
    else
        return (b);
}