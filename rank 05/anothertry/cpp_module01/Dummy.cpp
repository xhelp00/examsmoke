#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy")
{

}

Dummy::~Dummy()
{}


Dummy::Dummy(const Dummy &other) : ATarget(other)
{}


Dummy& Dummy::operator=(const Dummy &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Dummy* Dummy::clone() const
{
	return new Dummy(*this);
}