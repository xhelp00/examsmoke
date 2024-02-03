#ifndef Fireball_HPP
#define Fireball_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
			Fireball();
			Fireball(const Fireball &ref);
			Fireball& operator=(const Fireball &ref);
			virtual ~Fireball();

			virtual ASpell*		clone() const;



};

#endif