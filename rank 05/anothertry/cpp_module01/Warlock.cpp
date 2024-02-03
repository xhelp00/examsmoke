#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
 std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
	return _name;
}

const std::string& Warlock::getTitle() const
{
	return _title;
}

void Warlock::setTitle(const std::string &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am "<< _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	for (std::vector<ASpell*>::iterator it = _list.begin(); it != _list.end(); it++)
		if ((*(*it)).getName() == (*spell).getName())
			return ;
		_list.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spell)
{
	for (std::vector<ASpell*>::iterator it = _list.begin(); it != _list.end(); )
		if ((*(*it)).getName() == spell)
		{
			delete *it;
			it = _list.erase(it);
		}
		else
			it++;
}

void Warlock::launchSpell(std::string spell, const ATarget &ref)
{
	for (std::vector<ASpell*>::iterator it = _list.begin(); it != _list.end(); it++)
		if ((*(*it)).getName() == spell)
		{
			(*(*it)).launch(ref);
			return ;
		}


}