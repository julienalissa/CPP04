#include "Dog.hpp"

Dog::Dog() : Animal::Animal()
{
	std::cout << "Dog : Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal::Animal(other)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog : Copy assignement operator called" << std::endl;
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
	std::cout << "Dog : Destructor called" << std::endl;
	delete this->brain;
}

void 	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void Dog::setId(int index, std::string msg)
{
	this->brain->setId(index, msg);
}

std::string Dog::getIdea(int index)
{
	return (this->brain->getIdea(index));
}
