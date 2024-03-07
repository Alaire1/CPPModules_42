
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string     _type;

public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &other);
    WrongAnimal  &operator=(WrongAnimal const &other);
    virtual ~WrongAnimal(void);

    bool            operator==(WrongAnimal const &other) const;
    void            makeSound(void) const;
    std::string     getType(void) const;
};

#endif
