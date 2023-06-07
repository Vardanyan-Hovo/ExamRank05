#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget::ATarget(ATarget const &w)
{
	type = w.getType();
	
}


ATarget & ATarget::operator=(ATarget const &w)
{
	if (this != &w)
	{
		type = w.getType();

	}
	return *this;
}


ATarget::~ATarget()
{

}

//-----------------------

ATarget::ATarget(std::string const &n)
{
	type = n;


}


//---------------------
std::string const &ATarget::getType() const
{
	return type;
}

void ATarget::getHitBySpell(ASpell const &a) const
{
	std::cout<<type<<" has been "<<a.getEffects() << "!"<<std::endl;
}


