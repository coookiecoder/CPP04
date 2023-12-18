#include <iostream>
#include "Dog.hpp"

Dog::Dog(const Dog &copy) : Animal::Animal(copy.getType()) {
	std::cout << "Cat Copy called" << std::endl;
}

Dog & Dog::operator=(const Dog &copy) {
	std::cout << "Dog asignement called" << std::endl;
	this->type = copy.getType();
	return *this;
}

Dog::Dog(void) : Animal::Animal("Dog") {
	std::cout << "Dog contructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Dog made a sound" << std::endl;
}