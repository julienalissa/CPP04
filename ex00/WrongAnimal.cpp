#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("cat")
{

}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{

}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void 	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal" << std::endl;
}
