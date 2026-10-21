#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
protected:
	Brain *brain;
public:
	// 4 Orthodox Canonical Form,
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat(void);
	void 	makeSound() const;
};

#endif
