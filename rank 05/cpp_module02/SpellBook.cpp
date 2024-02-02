#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	for (std::vector<ASpell*>::iterator it = _book.begin(); it != _book.end(); )
	{
		delete *it;
		it = _book.erase(it);
	}

}

void 	SpellBook::learnSpell(ASpell* spell)
{
	for (std::vector<ASpell*>::iterator it = _book.begin(); it != _book.end(); it++)
		if ((*(*it)).getName() == (*spell).getName() )
			return ;
		_book.push_back(spell->clone());
}

void 	SpellBook::forgetSpell(const std::string &spell)
{
	for (std::vector<ASpell*>::iterator it = _book.begin(); it != _book.end(); )
		if ((*(*it)).getName() == spell )
		{
			delete *it;
			it = _book.erase(it);
		}
		else
			it++;
}

ASpell* SpellBook::createSpell(const std::string &spell)
{
	for (std::vector<ASpell*>::iterator it = _book.begin(); it != _book.end(); it++)
		if ((*(*it)).getName() == spell )
		{
			return (*(*it)).clone();
		}
	return NULL;
}