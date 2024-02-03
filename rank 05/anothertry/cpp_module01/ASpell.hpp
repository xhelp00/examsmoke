#ifndef ASpell_HPP
#define ASpell_HPP

#include <string>
#include <iostream>
class ATarget;

class ASpell
{
	public:
				ASpell(const std::string name, const std::string effects);
				virtual ~ASpell();
				ASpell(const ASpell &other);
				ASpell& operator=(const ASpell &other);

				const std::string& getName() const;
				const std::string& getEffects() const;
				virtual ASpell* clone() const = 0;

				void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;


	protected:
				std::string _name;
				std::string _effects;

				
};

#include "ATarget.hpp"

#endif