#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const int	nbAnimals = 4;
	Animal *Animals[nbAnimals];

	int	i = 0;
	while (i < nbAnimals)
	{
		if (i < nbAnimals / 2)
			Animals[i] = new Cat();
		else
			Animals[i] = new Dog();
		i++;
	}
	i = 0;
	while (i < nbAnimals)
	{
		Animals[i]->makeSound();
		i++;
	}

	std::cout << std::endl << std::endl;

	Cat chat;

	chat.setId(0, "Chat0");
	chat.setId(1, "Chat1");


	std::cout << chat.getIdea(0) << std::endl;
	std::cout << chat.getIdea(1) << std::endl;

	std::cout << std::endl << std::endl;
	Dog chien;

	chien.setId(0, "Chien0");
	chien.setId(1, "Chien1");


	std::cout << chien.getIdea(0) << std::endl;
	std::cout << chien.getIdea(1) << std::endl;

	std::cout << std::endl << std::endl;
	i = 0;
	while (i < nbAnimals)
	{
		delete Animals[i];
		i++;
	}


	return (0);
}
