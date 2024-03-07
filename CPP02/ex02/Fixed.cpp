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

bool Fixed::operator>(const Fixed &fixed) const
{
    return _value > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return _value < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return _value >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return _value <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return _value == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return _value != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    if (fixed.toFloat() == 0.0f)
    {
        throw std::invalid_argument("Division by zero is not allowed.");
    }
    return Fixed(toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++()
{
    _value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--()
{
    _value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a > b ? a : b;
}
