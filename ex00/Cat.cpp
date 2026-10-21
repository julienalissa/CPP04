#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	std::cout << "Cat : Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal::Animal(other)
{
	std::cout << "Cat : Copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat : Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat : Destructor called" << std::endl;
}

void 	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
