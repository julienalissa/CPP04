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

void Brain::setId(int index, std::string &msg)
{
	if (index >= 0 && index <= 100)
		this->ideas[index] = msg;
	else
		std::cout << "index should be between 0 and 100" << std::endl;
}

std::string Brain::getIdea(int index)
{
	if (index >= 0 && index <= 100)
		return (this->ideas[index]);
	else
		return ("");
}
