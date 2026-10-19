#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal::WrongAnimal(other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{

}

void 	WrongCat::makeSound() const
{
	std::cout << "Wrong Miaou" << std::endl;
}
