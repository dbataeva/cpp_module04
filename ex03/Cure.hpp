#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		const Cure& operator=(const Cure &to_assignation);
		Cure(const Cure &old);
		Cure();
		~Cure();

		virtual Cure* clone() const;
};

#endif