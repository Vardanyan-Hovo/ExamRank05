#include "ASpell.hpp"

ASpell::ASpell()
{
}

ASpell::ASpell(ASpell const &w)
{
	name = w.getName();
	effects = w.getEffects();
}


ASpell & ASpell::operator=(ASpell const &w)
{
	if (this != &w)
	{
		name = w.getName();
		effects = w.getEffects();
	}
	return *this;
}


ASpell::~ASpell()
{

}

//-----------------------

ASpell::ASpell(std::string const &n, std::string const &t)
{
	name = n;
	effects = t;

}


//---------------------
std::string ASpell::getName() const
{
	return name;
}

std::string ASpell::getEffects() const
{
	return effects;
}

void ASpell::launch(ATarget const &a)
{
	a.getHitBySpell(*this);
}

