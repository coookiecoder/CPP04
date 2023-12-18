#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include "Animal.hpp"

class WrongAnimal : public Animal {
	public:
	    WrongAnimal(void);
	    WrongAnimal(std::string type);
	    WrongAnimal(const WrongAnimal &copy);
	    ~WrongAnimal(void);
	    WrongAnimal &operator=(const WrongAnimal &copy);
	    void makeSound(void) const;
		std::string getType(void) const;
};

#endif