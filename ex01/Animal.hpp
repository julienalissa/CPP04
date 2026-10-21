#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>


class Animal
{
protected:
	std::string type;
public:
	// 4 Orthodox Canonical Form,
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal(void);

	std::string	getType() const;
	virtual void 	makeSound() const;
};

#endif
