#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::TargetGenerator(TargetGenerator const &w)
{
	(void)w;
}


TargetGenerator & TargetGenerator::operator=(TargetGenerator const &w)
{
	if (this != &w)
	{
	}
	return *this;
}


TargetGenerator::~TargetGenerator()
{
	std::map<std::string ,ATarget *>::iterator i = book.begin();
	while (i != book.end())
	{
		delete i->second;
		i++;
	}
	book.clear();
}

//-----------------------

	



	
void TargetGenerator::learnTargetType(ATarget*a)
{
	if (a)
	{
		book.insert(std::pair<std::string, ATarget *>(a->getType(), a->clone()));
	}
}

void TargetGenerator::forgetTargetType(std::string const &s)
{
	std::map<std::string, ATarget *>::iterator i = book.find(s);

	if (i != book.end())
	{
		delete i->second;
		book.erase(s);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &s)
{
	std::map<std::string, ATarget *>::iterator i = book.find(s);

	if (i != book.end())
	{
		return i->second->clone();
	}
	return NULL;
}

