#include <iostream>
#include "WrongAnimal.hpp" 

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal contructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal copy called" << std::endl;
	this->type = copy.getType();
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &copy) {
	std::cout << "WrongAnimal assignement called" << std::endl;
	this->type = copy.getType();
	return *this;
}

WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal contructor called" << std::endl;
	this->type = "";
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal deconstructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal just make a sound ?" << std::endl;
}