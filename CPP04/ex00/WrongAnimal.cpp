
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
    std::cout << "A wrong animal has been created." << std::endl;
    return;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
    *this = other;
    std::cout << "A  wrong animal has been cloned successfully." << std::endl;
    return;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &other)
{
    _type = other._type;
    std::cout <<  "Wrong animal's proprieties have been cloned." << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "A wrong animal has run away." << std::endl;
    return;
}

bool    WrongAnimal::operator==(WrongAnimal const &other) const
{
    return (_type == other._type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal is making wrong sound" << std::endl;
    return;
}

std::string WrongAnimal::getType(void) const
{
    return (_type);
}
