#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall()
{

}

BrickWall* BrickWall::clone() const
{
	BrickWall * f = new BrickWall();
	return f;
}
