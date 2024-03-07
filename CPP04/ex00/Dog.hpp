
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(Dog const &other);
    Dog &operator=(Dog const &other);
    virtual ~Dog(void);

    bool            operator==(Dog const &other) const;
    virtual void    makeSound(void) const;
};

#endif
