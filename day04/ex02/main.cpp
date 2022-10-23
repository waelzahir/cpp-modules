#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int _main()
{
	//const Animal* p = new animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	{
		Dog dog;
		Dog dog2(dog);
	}
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete i;
	delete j;
	return 0;
}
int main()
{
	_main();
	system("leaks Brain");

}
