#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    std::string partition = "==========================";
    std::cout << partition << std::endl;

    std::cout << "   -- Animal --" << std::endl;
    std::cout << partition << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << j->getType() << std::endl;
        std::cout << i->getType() << std::endl;
        delete j;
        delete i;
    }
    std::cout << partition << std::endl;
    std::cout << "      -- Get idea Dog --" << std::endl;
    std::cout << partition << std::endl;
    {
        Dog dog;
        Dog cat(dog);
        Dog tmp = dog;

        dog.setIdea(0, "Who is a good boy?");
        cat.setIdea(0, "Hey! Will you look at me ?");
        tmp.setIdea(0, "Look there's a cat!");
        std::cout << dog.getIdea(0) << std::endl;
        std::cout << cat.getIdea(0) << std::endl;
        std::cout << tmp.getIdea(0) << std::endl;
    }
    std::cout << partition << std::endl;
    std::cout << "      -- Get idea Cat --" << std::endl;
    std::cout << partition << std::endl;
    {
        Cat cat;
        Cat kot(cat);
        Cat tmp = cat;

        cat.setIdea(0, "Who is a good cat?");
        kot.setIdea(0, "Hey! Will you look at me, please?");
        tmp.setIdea(0, "Look there's a dog!");
        std::cout << cat.getIdea(0) << std::endl;
        std::cout << kot.getIdea(0) << std::endl;
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
        for (int i = 0; i < size; i++)
            delete pets[i];

        delete[] pets;
    }
    // std::cout << partition << std::endl;
    // std::cout << " -- Array of animals and their ideas --" << std::endl;
    // std::cout << partition << std::endl;
    // {
    //    int size = 4;
    //     Animal** pets = new Animal*[size];

    //     for (int i = 0; i < size/2; i++)
    //         pets[i] = new Dog();
    //     for (int i = size/2; i < size; i++)
    //         pets[i] = new Cat();
    //     for (int i = 0; i < size; i++)
    //     {
    //         pets[i]->setIdea(0, "I am a dog");
    //         pets[i]->setIdea(1, "I am a cat");
    //         pets[i]->setIdea(2, "I am an animal");

    //     }
    //     for (int i = 0; i < size; i++)
    //     {
    //         std::cout << pets[i]->getType() << std::endl;
    //         std::cout << pets[i]->getIdea(0) << std::endl;
    //         std::cout << pets[i]->getIdea(1) << std::endl;
    //     }
    //     for (int i = 0; i < size; i++)
    //         delete pets[i];

    //     delete[] pets;
    // }
    return (0);

}
