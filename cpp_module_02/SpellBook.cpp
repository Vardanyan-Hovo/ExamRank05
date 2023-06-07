#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::SpellBook(SpellBook const &w)
{
	(void)w;
}


SpellBook & SpellBook::operator=(SpellBook const &w)
{
	if (this != &w)
	{
	}
	return *this;
}


SpellBook::~SpellBook()
{
	std::multimap<std::string, ASpell *>::iterator i = book.begin();

	while (i != book.end())
	{
		delete i->second;
		i++;
	}
	book.clear();
}

//-----------------------

		
void SpellBook::learnSpell(ASpell *a)
{
	if (a)
	{
		book.insert(std::pair<std::string, ASpell *>(a->getName(), a->clone()));
	}
}

void SpellBook::forgetSpell(std::string const &s)
{
	std::multimap<std::string, ASpell *>::iterator i = book.find(s);

	if (i != book.end())
	{
		delete i->second;
		book.erase(s);
	}
}

ASpell* SpellBook::createSpell(std::string const &s)
{
	std::multimap<std::string, ASpell *>::iterator i = book.find(s);

	if (i != book.end())
	{
		return i->second;
	}
	return NULL;
}

