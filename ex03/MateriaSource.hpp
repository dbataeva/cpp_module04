#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource;
class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *inventory[4];
		
	public:
		MateriaSource();
		const MateriaSource& operator=(const MateriaSource &to_assignation);
		MateriaSource(const MateriaSource &old);

		virtual ~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif