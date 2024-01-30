#ifndef ASpell_HPP
#define ASpell_HPP

#include <iostream>

class ATarget;

class ASpell
{
	public:
			const std::string		 &getName() const;
			const std::string		 &getEffects() const;
			virtual ASpell*		clone() const = 0;

			ASpell(std::string name, std::string effects);

			ASpell();
			ASpell(const ASpell &other);
			ASpell &operator=(const ASpell &other);
			~ASpell();

	protected:

			std::string		_name;
			std::string		_effects;


};

#include "ATarget.hpp"


#endif