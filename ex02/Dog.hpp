#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
protected:
	Brain *brain;

public:
	// 4 Orthodox Canonical Form,
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog(void);
	void 	makeSound() const;
	void setId(int index, std::string msg);
	std::string getIdea(int index);
};

#endif
