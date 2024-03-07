#include "Zombie.hpp"

int main(void)
{
	std::string name;

    name = "Zombie2";
    std::cout << "--------------------------" << std::endl;
    std::cout << "Creating zombie on the heap" << std::endl;
    Zombie* zombie2 = newZombie(name); 
    delete zombie2;

    name = "Zombie3";
    std::cout << "--------------------------" << std::endl;
	std::cout << "Creating zombie on the stack" << std::endl;
    randomChump(name);
	
	
}
