#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	protected:
	    std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal(void);
		Animal &operator=(const Animal &copy);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif