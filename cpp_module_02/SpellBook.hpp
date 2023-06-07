#pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include <iostream>
#include <string>


class SpellBook
{
	private:
		SpellBook(SpellBook const &w);
		SpellBook &operator=(SpellBook const &w);


	public:
		SpellBook();
		~SpellBook();

	
		
		void learnSpell(ASpell *a) ;
		void forgetSpell(std::string const &s);
		ASpell* createSpell(std::string const &s);
	private:
		std::multimap<std::string, ASpell *> book;
};
