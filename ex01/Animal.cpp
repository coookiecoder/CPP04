#include <iostream>
#include "Animal.hpp"

Animal::Animal(std::string type) {
	std::cout << "Animal contructor called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy called" << std::endl;
	this->type = copy.getType();
}

Animal & Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignement called" << std::endl;
	this->type = copy.getType();
	return *this;
}

Animal::Animal(void) {
	std::cout << "Animal contructor called" << std::endl;
	this->type = "";
}

Animal::~Animal(void) {
	std::cout << "Animal deconstructor called" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Animal just make a sound" << std::endl;
}