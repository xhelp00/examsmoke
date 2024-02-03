#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <vector>

class ASpell;

class SpellBook
{
	public:
				SpellBook();
				~SpellBook();

				void 	learnSpell(ASpell* spell);
				void 	forgetSpell(const std::string &spell);
				ASpell* createSpell(const std::string &spell);

	private:
				std::vector<ASpell*> _book;

				SpellBook(const SpellBook &ref);
				SpellBook &operator=(const SpellBook &ref);


};

#include "ASpell.hpp"

#endif