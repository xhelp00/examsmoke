#ifndef SpellBook_HPP
#define SpellBook_HPP

#include <string>
#include <iostream>
#include <vector>

class ASpell;
class ATarget;

class SpellBook
{
	public:
				SpellBook();
				~SpellBook();

				void learnSpell(ASpell* spell);
				void forgetSpell(const std::string &spell);
				ASpell* createSpell(const std::string &spell);


	private:

				std::vector<ASpell*> _list;

				SpellBook(const SpellBook &other);
				SpellBook& operator=(const SpellBook &other);
};

#include "ASpell.hpp"
#include "ATarget.hpp"

#endif

/*
* learnSpell, takes a pointer to ASpell, that makes the SpellBook learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  SpellBook forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your SpellBook knows. Several
types fit the bill, it's up to you to choose the best one.
*/