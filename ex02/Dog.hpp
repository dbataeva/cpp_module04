#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *dogs_brain;
	public:
		virtual void makeSound(void) const;

		const Dog& operator=(const Dog &to_assignation);
		Dog(const Dog &old);
		Dog();
		virtual ~Dog();
};


#endif