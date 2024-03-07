
#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "A wrong cat has been created." << std::endl;
    return;
}

WrongCat::WrongCat(WrongCat const &other): WrongAnimal(other)
{
    *this = other;
    std::cout << "A wrong cat has been cloned successfully." << std::endl;
    return;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
    _type = other._type;
    std::cout << "WrongCat's proprieties have been cloned." << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "A wrong cat has run away." << std::endl;
    return;
}

bool    WrongCat::operator==(WrongCat const &other) const
{
    return (_type == other._type);
}

void    WrongCat::makeSound() const
{
    std::cout << "*MUUUUUUUUUUUUUUUUUUU*" << std::endl;
    return;
}
