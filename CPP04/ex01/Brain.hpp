
#ifndef CPP_MODULES_BRAIN_HPP
# define CPP_MODULES_BRAIN_HPP

# include <iostream>

class Brain
{
private:
    std::string   _ideas[100];

public:
    Brain();
    Brain(Brain const &other);
    Brain &operator=(Brain const &other);
    ~Brain();

    bool        operator==(Brain const &other) const;
    void        setIdea(int index, std::string idea);
    std::string getIdea(int index) const;
};

#endif
