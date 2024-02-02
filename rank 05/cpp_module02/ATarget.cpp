#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type)
{
}

ATarget::~ATarget()
{

}

ATarget::ATarget(const ATarget &other)
{
	_type = other._type;
}

ATarget& ATarget::operator=(const ATarget &other)
{
	_type = other._type;
	return *this;
}


const std::string&
ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &ref) const
{
	std::cout << _type << " has been " << ref.getEffects() << "!" << std::endl;
}

