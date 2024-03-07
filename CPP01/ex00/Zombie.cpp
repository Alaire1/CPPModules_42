#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
