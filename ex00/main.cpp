#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();

	const Animal* Dog1 = new Dog();
	const Animal* Dog2 = new Dog();
	const Dog Dog3;
	const Dog Dog4(Dog3);

	Dog Dog5;

	Dog5 = Dog3;

	std::cout << Dog1->getType() << " " << std::endl;
	Dog1->makeSound();
	std::cout << Dog2->getType() << " " << std::endl;
	Dog2->makeSound();
	std::cout << Dog3.getType() << " " << std::endl;
	Dog3.makeSound();
	std::cout << Dog4.getType() << " " << std::endl;
	Dog4.makeSound();
	std::cout << Dog5.getType() << " " << std::endl;
	Dog5.makeSound();

	const Animal* Cat1 = new Cat();
	const Animal* Cat2 = new Cat();
	const Cat Cat3;
	const Cat Cat4(Cat3);
	
	Cat Cat5;

	Cat5 = Cat3;

	std::cout << Cat1->getType() << " " << std::endl;
	Cat1->makeSound();
	std::cout << Cat2->getType() << " " << std::endl;
	Cat2->makeSound();
	std::cout << Cat3.getType() << " " << std::endl;
	Cat3.makeSound();
	std::cout << Cat5.getType() << " " << std::endl;
	Cat4.makeSound();
	std::cout << Cat5.getType() << " " << std::endl;
	Cat5.makeSound();

	delete meta;

	delete Dog1;
	delete Dog2;

	delete Cat1;
	delete Cat2;

	return 0;
}