#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Cat : Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal::WrongAnimal(other)
{
	std::cout << "Wrong Cat : Copy constructor called" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Wrong Cat : Copy assignement operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat : Destructor called" << std::endl;
}

void 	WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou" << std::endl;
}
