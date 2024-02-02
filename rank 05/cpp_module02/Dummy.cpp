#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy &ref) : ATarget(ref)
{

}

Dummy& Dummy::operator=(const Dummy &ref)
{
	if (this != &ref)
		*this = ref;
	return *this;
}

Dummy::~Dummy()
{}

ATarget* Dummy::clone() const
{
	return new Dummy(*this);
}