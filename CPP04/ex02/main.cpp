#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    std::string partition = "==========================";
   	std::cout << partition << std::endl;
    std::cout << "      -- Abstract Animal --" << std::endl;
    std::cout << partition << std::endl;
    {
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		// const Animal* k = new Animal();
        //   Animal animal;
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
        // std::cout << animal.getType() << std::endl;
		// std::cout << k->getType() << std::endl;
		j->makeSound();
		i->makeSound();
        //  animal.makeSound();
		// k->makeSound();
		delete j;
		delete i;
        // delete k;
    }
    std::cout << partition << std::endl;
    std::cout << "        -- Get idea --" << std::endl;
    std::cout << partition << std::endl;
    {
        Dog dog;
        Dog dog2(dog);
        Dog tmp = dog;

        dog.setIdea(0, "Who is a good boy?");
        dog2.setIdea(0, "Hey! Will you look at me ?");
        tmp.setIdea(0, "Look there's a cat!");
        std::cout << dog.getIdea(0) << std::endl;
        std::cout << dog2.getIdea(0) << std::endl;
        std::cout << tmp.getIdea(0) << std::endl;
    }
    std::cout << partition << std::endl;
    std::cout << " -- Array of animals --" << std::endl;
    std::cout << partition << std::endl;
    {
        int size = 6;
        Animal** pets = new Animal*[size];

        for (int i = 0; i < size/2; i++)
            pets[i] = new Dog();
        for (int i = size/2; i < size; i++)
            pets[i] = new Cat();
        std::cout << pets[0]->getType() << std::endl;
        std::cout << pets[size - 1]->getType() << std::endl;
        std::cout << pets[2]->getType() << std::endl;
        for (int i = 0; i < size; i++)
            delete pets[i];

        delete[] pets;
    }
    return (0);
}
