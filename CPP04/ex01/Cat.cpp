#include "Cat.hpp"

Cat::Cat(void): Animal()
{
    _type = "Cat";
    std::cout << "A cat has been created" << std::endl;
    _brain = new Brain();
    return;
}

Cat::Cat(Cat const &other): Animal(other)
{
    _brain = new Brain();
    *this = other;
    std::cout << "A cat has been cloned successfully" << std::endl;
    return;
}

Cat &Cat::operator=(Cat const &other)
{
    _type = other._type;
    *_brain = *other._brain;
    std::cout << "Cat's properities has been cloned" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "A cat has run away" << std::endl;
    return;
}

bool    Cat::operator==(Cat const &other) const
{
    return (_type == other._type);
}

void    Cat::makeSound() const
{
    std::cout << "*Meow* *Meow*" << std::endl;
    return;
}

void    Cat::setIdea(int index, std::string idea)
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

std::string Cat::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cout << "No thoughts there." << std::endl;
        return (NULL);
    }
    else
        return (_brain->getIdea(index));
}
