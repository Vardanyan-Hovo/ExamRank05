#include "Warlock.hpp"

Warlock::Warlock()
{
}

Warlock::Warlock(Warlock const &w)
{
	name = w.getName();
	title = w.getTitle();
}


Warlock & Warlock::operator=(Warlock const &w)
{
	if (this != &w)
	{
		name = w.getName();
		title = w.getTitle();
	}
	return *this;
}


Warlock::~Warlock()
{
	std::cout<<name<<": My job here is done!"<<std::endl;
}

//-----------------------

Warlock::Warlock(std::string const &n, std::string const &t)
{
	name = n;
	title = t;
	std::cout <<name<<": This looks like another boring day."<<std::endl;
}


//---------------------
std::string const &Warlock::getName() const
{
	return name;
}

std::string const &Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(std::string const &t)
{
	title = t;
}




void Warlock::introduce() const
{

	std::cout<<name<< ": I am " << name << ", " << title <<"!"<<std::endl;
}
