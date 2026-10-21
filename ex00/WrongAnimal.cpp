#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("cat")
{
	std::cout << "Wrong Animal : Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Wrong Animal : Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Wrong Animal : Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal : Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void 	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal" << std::endl;
}
