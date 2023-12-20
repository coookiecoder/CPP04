#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat : public WrongAnimal {
	private:
		Brain *brain;
	public:
		WrongCat(const WrongCat &copy); 
	    WrongCat(void); 
	    ~WrongCat(void);
		WrongCat &operator=(const WrongCat &copy);
};

#endif