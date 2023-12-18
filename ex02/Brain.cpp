#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& copy){
	std::cout << "Brain copy called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& copy){
	std::cout << "Brain asignement called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain deconstructor called" << std::endl;
}