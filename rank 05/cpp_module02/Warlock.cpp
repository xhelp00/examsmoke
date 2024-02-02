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
	_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	_book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, const ATarget &ref)
{
	ASpell* tmp;

	tmp = _book.createSpell(spell);

	if (tmp != NULL)
	{
		(*tmp).launch(ref);
		delete tmp;
	}
}