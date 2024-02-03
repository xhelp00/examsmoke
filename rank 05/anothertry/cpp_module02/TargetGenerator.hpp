#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include <string>
#include <iostream>
#include <vector>

class ASpell;
class ATarget;

class TargetGenerator
{
	public:
				TargetGenerator();
				~TargetGenerator();

				void learnTargetType(ATarget* spell);
				void forgetTargetType(const std::string &spell);
				ATarget* createTarget(const std::string &spell);


	private:

				std::vector<ATarget*> _list;

				TargetGenerator(const TargetGenerator &other);
				TargetGenerator& operator=(const TargetGenerator &other);
};

#include "ASpell.hpp"
#include "ATarget.hpp"

#endif

/*
* learnSpell, takes a pointer to ASpell, that makes the TargetGenerator learn a spell
* forgetSpell, takes a string corresponding a to a spell's name, and makes the
  TargetGenerator forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

You will need a new attribute to store the spells your TargetGenerator knows. Several
types fit the bill, it's up to you to choose the best one.
*/