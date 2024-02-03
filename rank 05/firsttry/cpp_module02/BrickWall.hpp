#ifndef BrickWall_HPP
#define BrickWall_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
			BrickWall();
			BrickWall(const BrickWall &ref);
			BrickWall& operator=(const BrickWall &ref);
			virtual ~BrickWall();

			virtual ATarget*		clone() const;



};

#endif