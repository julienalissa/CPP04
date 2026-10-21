#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "------" << std::endl;

	std::cout << "avec polymorphisme" << std::endl;
	const Animal* an = new Cat();
	std::cout << an->getType() << " " << std::endl;
	an->makeSound();
	delete an;

	std::cout << std::endl << "------" << std::endl;

	std::cout << "sans polymorphisme" << std::endl;
	const WrongAnimal* WrongAn = new WrongCat();
	std::cout << WrongAn->getType() << " " << std::endl;
	WrongAn->makeSound();
	delete WrongAn;
	return (0);

}
