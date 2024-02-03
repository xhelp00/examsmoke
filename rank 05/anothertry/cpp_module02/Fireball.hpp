#ifndef Fireball_HPP
#define Fireball_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
				Fireball();
				virtual ~Fireball();
				Fireball(const Fireball &other);
				Fireball& operator=(const Fireball &other);

				virtual Fireball* clone() const;

				//void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;

				
};



#endif