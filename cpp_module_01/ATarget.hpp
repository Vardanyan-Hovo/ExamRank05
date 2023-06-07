#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>


class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(ATarget const &w);
		ATarget &operator=(ATarget const &w);
	public:
		ATarget(std::string const &n);
		virtual ~ATarget();

	public:
		std::string const & getType() const;

	
		void getHitBySpell(ASpell const &a) const;		
	
		virtual ATarget* clone() const = 0;
	private:
		std::string type;


};
