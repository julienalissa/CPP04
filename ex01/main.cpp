#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;

	// std::cout << std::endl << "------" << std::endl;

	// std::cout << "avec polymorphisme" << std::endl;
	// const Animal* an = new Cat();
	// std::cout << an->getType() << " " << std::endl;
	// an->makeSound();
	// delete an;

	// std::cout << std::endl << "------" << std::endl;

	// std::cout << "sans polymorphisme" << std::endl;
	// const WrongAnimal* WrongAn = new WrongCat();
	// std::cout << WrongAn->getType() << " " << std::endl;
	// WrongAn->makeSound(); // Doit afficher le son du WrongAnimal (parce qu'il n'y a PAS de virtual)
	// delete WrongAn;

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
	i = 0;
	while (i < nbAnimals)
	{
		delete Animals[i];
		i++;
	}

	return (0);
}
