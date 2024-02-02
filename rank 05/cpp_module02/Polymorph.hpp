#ifndef Polymorph_HPP
#define Polymorph_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
			Polymorph();
			Polymorph(const Polymorph &ref);
			Polymorph& operator=(const Polymorph &ref);
			virtual ~Polymorph();

			virtual ASpell*		clone() const;



};

#endif