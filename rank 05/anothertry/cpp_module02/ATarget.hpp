#ifndef ATarget_HPP
#define ATarget_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget
{
	public:
				ATarget(const std::string type);
				virtual ~ATarget();
				ATarget(const ATarget &other);
				ATarget& operator=(const ATarget &other);

				const std::string& getType() const;
				virtual ATarget* clone() const = 0;

				void getHitBySpell(const ASpell &ref) const;
				//void launch(const ATarget& ref);
				//void setTitle(const std::string &title);
				//void introduce() const;


	private:
				std::string _type;

				
};

#include "ASpell.hpp"

#endif