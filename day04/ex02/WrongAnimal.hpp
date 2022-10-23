#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &rhs);
		std::string   getType() const;
		WrongAnimal&	operator = (WrongAnimal const &rhs);
		void	makeSound() const;
		~WrongAnimal();
};


class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &rhs);
		WrongCat& operator = (WrongCat const &rhs);
		void	makeSound() const;
		~WrongCat();
};
#endif
