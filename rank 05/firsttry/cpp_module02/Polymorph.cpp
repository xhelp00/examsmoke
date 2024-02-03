#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter")
{

}

Polymorph::Polymorph(const Polymorph &ref) : ASpell(ref)
{

}

Polymorph& Polymorph::operator=(const Polymorph &ref)
{
	if (this != &ref)
		*this = ref;
	return *this;
}

Polymorph::~Polymorph()
{}

ASpell* Polymorph::clone() const
{
	return new Polymorph(*this);
}