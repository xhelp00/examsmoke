#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(const BrickWall &ref) : ATarget(ref)
{

}

BrickWall& BrickWall::operator=(const BrickWall &ref)
{
	if (this != &ref)
		*this = ref;
	return *this;
}

BrickWall::~BrickWall()
{}

ATarget* BrickWall::clone() const
{
	return new BrickWall(*this);
}