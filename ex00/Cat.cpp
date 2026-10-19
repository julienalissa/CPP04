#include "Cat.hpp"

Cat::Cat() : Animal::Animal()
{
	this->type = "Cat";
}

Cat::Cat(const Cat &other) : Animal::Animal(other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Cat::~Cat(void)
{

}

void 	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}
