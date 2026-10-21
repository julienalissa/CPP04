#include "Animal.hpp"

Animal::Animal() : type("cat")
{
	std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal : Copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal : Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal : Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void 	Animal::makeSound() const
{

}
