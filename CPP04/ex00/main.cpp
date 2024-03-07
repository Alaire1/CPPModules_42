
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main( void )
{
    std::string partition = "==========================";
    std::cout << partition << std::endl;
    std::cout << "      -- Animal --" << std::endl;
    std::cout << partition << std::endl;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    
    delete  meta;
    delete  j;
    delete  i;

    std::cout << partition << std::endl;
    std::cout << "     -- WrongAnimal --" << std::endl;
    std::cout << partition << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    delete  wrongCat;

    return 0;
}

