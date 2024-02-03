#ifndef Polymorph_HPP
#define Polymorph_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
				Polymorph();
				virtual ~Polymorph();
				Polymorph(const Polymorph &other);
				Polymorph& operator=(const Polymorph &other);

				virtual Polymorph* clone() const;

				//void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;

				
};



#endif