
#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    _type = "Dog";
    std::cout << "A dog has been created." << std::endl;
    return;
}

Dog::Dog(Dog const &other): Animal(other)
{
    *this = other;
    std::cout << "A dog has been cloned successfully." << std::endl;
    return;
}

Dog &Dog::operator=(Dog const &other)
{
    _type = other._type;
    std::cout << "Dog's proprieties have been cloned." << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "A dog has run away." << std::endl;
    return;
}

bool    Dog::operator==(Dog const &other) const
{
    return (_type == other._type);
}

void    Dog::makeSound() const
{
    std::cout << "*Woof* *Woof*" << std::endl;
    return;
}
