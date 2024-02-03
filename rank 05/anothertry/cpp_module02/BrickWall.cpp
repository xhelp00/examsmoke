#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::~BrickWall()
{}


BrickWall::BrickWall(const BrickWall &other) : ATarget(other)
{}


BrickWall& BrickWall::operator=(const BrickWall &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

BrickWall* BrickWall::clone() const
{
	return new BrickWall(*this);
}