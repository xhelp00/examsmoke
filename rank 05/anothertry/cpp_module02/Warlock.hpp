#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>

class ASpell;
class ATarget;
class SpellBook;
#include "SpellBook.hpp"


class Warlock
{
	public:
				Warlock(const std::string &name, const std::string &title);
				~Warlock();

				const std::string& getName() const;
				const std::string& getTitle() const;

				void setTitle(const std::string &title);
				void introduce() const;

				void learnSpell(ASpell* spell);
				void forgetSpell(std::string spell);
				void launchSpell(std::string spell, const ATarget &ref);


	private:
				std::string _name;
				std::string _title;

				SpellBook _list;

				Warlock(const Warlock &other);
				Warlock& operator=(const Warlock &other);
};

#include "ASpell.hpp"
#include "ATarget.hpp"

#endif

/*
* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.
*/