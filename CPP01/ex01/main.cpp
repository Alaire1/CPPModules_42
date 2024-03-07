#include "Zombie.hpp"

int main(void)
{
    const int N = 3;
    std::string name = "Zombieee";
    
    Zombie *zombies = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        {
            std::cout << "Zombie " << i << " says: ";
            zombies[i].announce();
        }
    delete [] zombies;
    return (0);
}
