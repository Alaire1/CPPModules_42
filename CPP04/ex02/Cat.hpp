#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *_brain;

public:
    Cat(void);
    Cat(Cat const &other);
    Cat &operator=(Cat const &other);
    virtual ~Cat(void);

    bool            operator==(Cat const &other) const;
    virtual void    makeSound(void) const;
    void            setIdea(int index, std::string idea);
    std::string     getIdea(int index) const;
};

#endif
