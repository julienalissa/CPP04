#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	this->type = "Dog";
}

Dog::Dog(const Dog &other) : Animal::Animal(other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Dog::~Dog(void)
{

}

void 	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
