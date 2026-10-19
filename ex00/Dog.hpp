#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
public:
	// 4 Orthodox Canonical Form,
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog(void);
	void 	makeSound() const;
};

#endif
