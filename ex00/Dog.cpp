#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal::Animal(other)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog : Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog : Destructor called" << std::endl;
}

void 	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
