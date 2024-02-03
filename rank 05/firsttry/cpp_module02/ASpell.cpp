#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
}

ASpell::~ASpell()
{

}

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

const std::string&
ASpell::getName() const
{
	return this->_name;
}

const std::string&
ASpell::getEffects() const
{
	return this->_effects;
}

void ASpell::launch(const ATarget &ref) const
{
	ref.getHitBySpell(*this);
}