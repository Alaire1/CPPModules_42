
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *_brain;

public:
    Dog(void);
    Dog(Dog const &other);
    Dog &operator=(Dog const &other);
    virtual ~Dog(void);

    bool            operator==(Dog const &other) const;
    virtual void    makeSound(void) const;
    void            setIdea(int index, std::string idea);
    std::string     getIdea(int index) const;
};

#endif
