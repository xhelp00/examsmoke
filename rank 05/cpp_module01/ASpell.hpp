#ifndef ASpell_HPP
#define ASpell_HPP

#include <string>
#include <iostream>

class ATarget;

class ASpell
{
	public:
				

				ASpell(const std::string name, const std::string effects);
				
				ASpell();
				ASpell(const ASpell &other);
				ASpell& operator=(const ASpell &other);
				~ASpell();

				virtual ASpell* clone() const = 0;

				const std::string&	getName() const;
				const std::string&	getEffects() const;

				void launch(const ATarget &target) const;

	protected:

				std::string		_name;
				std::string		_effects;

};

#include "ATarget.hpp"

#endif