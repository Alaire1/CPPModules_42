#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    _type = "Dog";
    std::cout << "A dog has been cloned" << std::endl;
    _brain = new Brain();
    return;
}

Dog::Dog(Dog const &other): Animal(other)
{
    _brain = new Brain();
    *this = other;
    std::cout << "A dog has been cloned successfully." << std::endl;
    return;
}

Dog &Dog::operator=(Dog const &other)
{
    _type = other._type;
    *_brain = *other._brain;
    std::cout << "Dog's properities have benn cloned" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    delete _brain;
    std::cout << "A dog has run away" << std::endl;
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

void    Dog::setIdea(int index, std::string idea)
{
    if (index < 0 || index >= 100)
    {
        std::cout << "That idea cannot be stored there." << std::endl;
        return ;
    }
    else
        _brain->setIdea(index, idea);
    return;
}

std::string Dog::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "No thoughts there." << std::endl;
        return (NULL);
    }
    else
        return (_brain->getIdea(index));
}
