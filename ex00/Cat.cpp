#include <iostream>
#include "Cat.hpp"

Cat::Cat(const Cat &copy) : Animal::Animal(copy.getType()) {
	std::cout << "Cat Copy called" << std::endl;
}

Cat & Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignement called" << std::endl;
	this->type = copy.getType();
	return *this;
}

Cat::Cat(void) : Animal::Animal("Cat") {
	std::cout << "Cat contructor called" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Cat made a sound" << std::endl;
}