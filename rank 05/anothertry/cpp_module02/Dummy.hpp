#ifndef Dummy_HPP
#define Dummy_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
				Dummy();
				virtual ~Dummy();
				Dummy(const Dummy &other);
				Dummy& operator=(const Dummy &other);

				virtual Dummy* clone() const;

				//void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;

				
};



#endif