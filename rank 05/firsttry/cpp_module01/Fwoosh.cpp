#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::Fwoosh(const Fwoosh &ref) : ASpell(ref)
{

}

Fwoosh& Fwoosh::operator=(const Fwoosh &ref)
{
	if (this != &ref)
		*this = ref;
	return *this;
}

Fwoosh::~Fwoosh()
{}

ASpell* Fwoosh::clone() const
{
	return new Fwoosh(*this);
}