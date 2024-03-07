#include "Fixed.hpp"


Fixed::Fixed() :_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) :_value(fixed.getRawBits())
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) :_value(i << _bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) :_value(roundf(f * (1 << _bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed) {
       _value = fixed.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    return _value;
}

void Fixed::setRawBits(int const raw)
{
   _value = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(_value) / (1 << _bits);
}

int Fixed::toInt() const
{
    return _value >> _bits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}