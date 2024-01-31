#include "ASpell.hpp"

ASpell::ASpell(const std::string name, const std::string effects) 
: _name(name), _effects(effects)
{

}
				
ASpell::ASpell()
{}
ASpell::ASpell(const ASpell &other)
{
	_name = other._name;
	_effects = other._effects;
	
}
ASpell& ASpell::operator=(const ASpell &other)
{
	_name = other._name;
	_effects = other._effects;
	return *this;
}
ASpell::~ASpell()
{}

//virtual ASpell* clone() const = 0;

const std::string&	ASpell::getName() const
{
	return this->_name;
}

const std::string&	ASpell::getEffects() const
{
	return this->_effects;
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}

