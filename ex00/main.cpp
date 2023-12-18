#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
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

	const WrongAnimal* WrongCat1 = new WrongCat();
	const WrongAnimal* WrongCat2 = new WrongCat();
	const WrongCat WrongCat3;
	const WrongCat WrongCat4(WrongCat3);

	WrongCat WrongCat5;

	WrongCat5 = WrongCat3;

	std::cout << WrongCat1->getType() << " " << std::endl;
	WrongCat1->makeSound();
	std::cout << WrongCat2->getType() << " " << std::endl;
	WrongCat2->makeSound();
	std::cout << WrongCat3.getType() << " " << std::endl;
	WrongCat3.makeSound();
	std::cout << WrongCat5.getType() << " " << std::endl;
	WrongCat4.makeSound();
	std::cout << WrongCat5.getType() << " " << std::endl;
	WrongCat5.makeSound();

	delete meta;

	delete Dog1;
	delete Dog2;

	delete Cat1;
	delete Cat2;

	delete WrongCat1;
	delete WrongCat2;

	return 0;
}