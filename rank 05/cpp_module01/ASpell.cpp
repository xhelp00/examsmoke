#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
	//std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

ASpell::~ASpell()
{

	//std::cout << this->_name << ": My job here is done!" << std::endl;
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

