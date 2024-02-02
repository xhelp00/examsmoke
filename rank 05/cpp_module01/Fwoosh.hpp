#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
			Fwoosh();
			Fwoosh(const Fwoosh &ref);
			Fwoosh& operator=(const Fwoosh &ref);
			virtual ~Fwoosh();

			virtual ASpell*		clone() const;



};

#endif