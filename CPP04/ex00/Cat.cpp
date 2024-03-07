
#include "Cat.hpp"

Cat::Cat(void): Animal()
{
    _type = "Cat";
    std::cout << "A cat has been created." << std::endl;
    return;
}

Cat::Cat(Cat const &other): Animal(other)
{
    *this = other;
    std::cout << "A cat has been cloned successfully." << std::endl;
    return;
}

Cat &Cat::operator=(Cat const &other)
{
    _type = other._type;
    std::cout << "Cat's proprieties have been cloned." << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "A cat has run away." << std::endl;
    return;
}

bool    Cat::operator==(Cat const &other) const
{
    return (_type == other._type);
}

void    Cat::makeSound() const
{
    std::cout << "*Meow*" << std::endl;
    return;
}

