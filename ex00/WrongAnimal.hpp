#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>


class WrongAnimal
{
protected:
	std::string type;
public:
	// 4 Orthodox Canonical Form,
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	~WrongAnimal(void);
	std::string	getType() const;
	void 	makeSound() const;
};

#endif
