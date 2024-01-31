#ifndef ATarget_HPP
#define ATarget_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget
{
	public:
				

				ATarget(const std::string type);
				
				ATarget();
				ATarget(const ATarget &other);
				ATarget& operator=(const ATarget &other);
				~ATarget();

				virtual ATarget* clone() const = 0;

				const std::string&	getType() const;

				void getHitBySpell(const ASpell &spell) const;


	protected:

				std::string		_type;



};

#include "ASpell.hpp"

#endif