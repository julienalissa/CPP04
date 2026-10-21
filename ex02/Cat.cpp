#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal::Animal(other)
{
	this->brain = new Brain(*(other.brain));
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*(other.brain));
	}
	return (*this);
}

Cat::~Cat(void)
{
	delete this->brain;
}

void 	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
