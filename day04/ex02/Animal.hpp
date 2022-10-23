#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &rhs);
		std::string   getType() const;
		Animal&	operator = (Animal const &rhs);
		virtual void	makeSound() const = 0;
		virtual ~Animal();
};

#endif