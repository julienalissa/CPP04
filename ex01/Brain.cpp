#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain : Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain : Copy assignement operator called" << std::endl;
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain : Destructor called" << std::endl;
}


