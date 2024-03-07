
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(Cat const &other);
    Cat &operator=(Cat const &other);
    virtual ~Cat(void);

    bool            operator==(Cat const &other) const;
    virtual void    makeSound(void) const;
};

#endif
