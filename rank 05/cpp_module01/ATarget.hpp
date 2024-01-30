#ifndef ATarget_HPP
#define ATarget_HPP

#include <iostream>

class ASpell;

class ATarget
{
	public:
			const std::string		 &getType() const;

			virtual ATarget*		clone() const = 0;

			ATarget(std::string type);

			ATarget();
			ATarget(const ATarget &other);
			ATarget &operator=(const ATarget &other);
			~ATarget();

	protected:

			std::string		_type;


};

#include "ASpell.hpp"

#endif