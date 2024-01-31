#include "ATarget.hpp"

ATarget::ATarget(const std::string type) : _type(type)
{

}
				
ATarget::ATarget()
{}
ATarget::ATarget(const ATarget &other)
{
	_type = other._type;
}
ATarget& ATarget::operator=(const ATarget &other)
{
	_type = other._type;
	return *this;
}
ATarget::~ATarget()
{}

//virtual ATarget* clone() const = 0;

const std::string&	ATarget::getType() const
{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
