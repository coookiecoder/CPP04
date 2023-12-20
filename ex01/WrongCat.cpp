#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal::WrongAnimal(copy.getType()) {
	std::cout << "WrongCat Copy called" << std::endl;
	this->brain = new Brain(*copy.brain);
}

WrongCat & WrongCat::operator=(const WrongCat &copy) {
	std::cout << "WrongCat assignment called" << std::endl;
	this->type = copy.getType();
	delete this->brain;
	this->brain = new Brain(*copy.brain);
	return *this;
}

WrongCat::WrongCat(void) : WrongAnimal::WrongAnimal("WrongCat") {
	std::cout << "WrongCat constructor called" << std::endl;
	this->brain = new Brain();
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat deconstructor called" << std::endl;
	delete this->brain;
}