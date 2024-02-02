#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class ASpell;
class ATarget;
class Warlock
{
	public:
			const std::string		 &getName() const;
			const std::string		 &getTitle() const;

			Warlock(std::string const&, std::string const&);
			
			void	setTitle(std::string const&);
			void	introduce() const;

			~Warlock();

			void learnSpell(ASpell* spell);
			void forgetSpell(std::string spell);
			void launchSpell(std::string spell, const ATarget &ref);

	private:

			std::string		_name;
			std::string		_title;
			std::vector<ASpell*>  _vec;

			Warlock();
			Warlock(const Warlock &other);
			Warlock &operator=(const Warlock &other);

};

#include "ATarget.hpp"
#include "ASpell.hpp"
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