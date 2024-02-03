#ifndef Fwoosh_HPP
#define Fwoosh_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
				Fwoosh();
				virtual ~Fwoosh();
				Fwoosh(const Fwoosh &other);
				Fwoosh& operator=(const Fwoosh &other);

				virtual Fwoosh* clone() const;

				//void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;

				
};



#endif