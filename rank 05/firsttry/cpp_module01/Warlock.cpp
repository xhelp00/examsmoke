#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}


Warlock::~Warlock()
{

	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
	std::cout << this->_name << ": I am "<< this->_name << ", " << this->_title << "!" << std::endl;
}

const std::string&
Warlock::getName() const
{
	return this->_name;
}

const std::string&
Warlock::getTitle() const
{
	return this->_title;
}

void	Warlock::setTitle(std::string const &title)
{
	this->_title = title;
}

void Warlock::learnSpell(ASpell* spell)
{
	for (std::vector<ASpell*>::iterator it = _vec.begin(); it != _vec.end(); it++)
		if ((*(*it)).getName() == (*spell).getName() )
			return ;
		_vec.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spell)
{
	for (std::vector<ASpell*>::iterator it = _vec.begin(); it != _vec.end(); )
		if ((*(*it)).getName() == spell )
		{
			delete *it;
			it = _vec.erase(it);
		}
		else
			it++;
}

void Warlock::launchSpell(std::string spell, const ATarget &ref)
{
	for (std::vector<ASpell*>::iterator it = _vec.begin(); it != _vec.end(); it++)
		if ((*(*it)).getName() == spell )
		{
			(*(*it)).launch(ref);
			return ;
		}
}