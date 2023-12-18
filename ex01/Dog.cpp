#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(const Dog &copy) : Animal::Animal(copy.getType()) {
	std::cout << "Dog Copy called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Dog & Dog::operator=(const Dog &copy) {
	std::cout << "Dog asignement called" << std::endl;
	this->type = copy.getType();
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	return *this;
}

Dog::Dog(void) : Animal::Animal("Dog") {
	std::cout << "Dog contructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const {
	std::cout << "Dog made a sound" << std::endl;
}