#include <iostream>
#include "Cat.hpp"

Cat::Cat(const Cat &copy) : Animal::Animal(copy.getType()) {
	std::cout << "Cat Copy called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

Cat & Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignement called" << std::endl;
	this->type = copy.getType();
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	return *this;
}

Cat::Cat(void) : Animal::Animal("Cat") {
	std::cout << "Cat contructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const {
	std::cout << "Cat made a sound" << std::endl;
}