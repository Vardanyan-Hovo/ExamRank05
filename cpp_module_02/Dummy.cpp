#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy()
{

}

Dummy* Dummy::clone() const
{
	Dummy * f = new Dummy();
	return f;
}
