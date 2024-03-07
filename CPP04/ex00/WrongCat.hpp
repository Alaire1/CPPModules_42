
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat(void);
    WrongCat(WrongCat const &other);
    WrongCat &operator=(WrongCat const &other);
    virtual ~WrongCat(void);

    bool    operator==(WrongCat const &other) const;
    void    makeSound(void) const;
};

#endif
