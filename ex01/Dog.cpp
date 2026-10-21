#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal::Animal(other)
{
	this->brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete this->brain;
}

void 	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
