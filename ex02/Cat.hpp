#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *cats_brain;
	public:
		virtual void makeSound(void) const;

		const Cat& operator=(const Cat &to_assignation);
		Cat(const Cat &old);
		Cat();
		virtual ~Cat();
};

#endif
