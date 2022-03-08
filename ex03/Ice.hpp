#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		const Ice& operator=(const Ice &to_assignation);
		Ice(const Ice &old);
		Ice();
		~Ice();

		virtual Ice* clone() const;
};

#endif