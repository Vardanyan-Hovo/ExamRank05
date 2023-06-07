#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh()
{

}

Fwoosh* Fwoosh::clone() const
{
	Fwoosh * f = new Fwoosh();
	return f;
}
