#include "Animal.hpp"

Animal::Animal() : type("cat")
{

}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

Animal::~Animal(void)
{

}

std::string	Animal::getType() const
{
	return (this->type);
}
