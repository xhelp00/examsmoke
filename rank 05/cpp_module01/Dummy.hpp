#ifndef Dummy_HPP
#define Dummy_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
			Dummy();
			Dummy(const Dummy &ref);
			Dummy& operator=(const Dummy &ref);
			virtual ~Dummy();

			virtual ATarget*		clone() const;



};

#endif