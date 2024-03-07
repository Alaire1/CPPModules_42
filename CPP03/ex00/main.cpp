#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("machine");
    ClapTrap clapTrapCopy(clapTrap);
    ClapTrap clapTrapAssignation;
    clapTrapAssignation = clapTrap;

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    return (0);
}