#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public: 
	    Dog(const Dog &copy);
	    Dog(void);
	    ~Dog(void);
	    Dog &operator=(const Dog &copy);
		void makeSound(void) const;
};

#endif