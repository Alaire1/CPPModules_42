
#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
    std::cout << "An animal has been created." << std::endl;
    return;
}

Animal::Animal(Animal const &other)
{
    *this = other;
    std::cout << "An animal has been cloned successfully." << std::endl;
    return;
}

Animal  &Animal::operator=(Animal const &other)
{
    if (this != &other)
        this->_type = other._type;
    std::cout <<  "Animal proprieties have been cloned" << std::endl;
    return (*this);
}

Animal::~Animal(void)
{
    std::cout << "An animal has run away." << std::endl;
    return;
}

bool    Animal::operator==(Animal const &other) const
{
    return (_type == other._type);
}

void    Animal::makeSound(void) const
{
    std::cout << "Animal is making a sound" << std::endl;
    return;
}

std::string Animal::getType(void) const
{
    return (_type);
}

