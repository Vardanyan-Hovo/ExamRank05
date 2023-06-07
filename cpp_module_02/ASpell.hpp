#pragma once

#include "ATarget.hpp"

#include <iostream>
#include <string>


class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(ASpell const &w);
		ASpell &operator=(ASpell const &w);
	public:
		ASpell(std::string const &n, std::string const &t);
		virtual ~ASpell();

	public:
		std::string getName() const;
		std::string getEffects() const;
	
		
	
		virtual ASpell* clone() const = 0;

		void launch(ATarget const &a);
	protected:
		std::string name;
		std::string effects;

};
