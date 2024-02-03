#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed")
{

}

Fwoosh::~Fwoosh()
{}


Fwoosh::Fwoosh(const Fwoosh &other) : ASpell(other)
{}


Fwoosh& Fwoosh::operator=(const Fwoosh &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Fwoosh* Fwoosh::clone() const
{
	return new Fwoosh(*this);
}