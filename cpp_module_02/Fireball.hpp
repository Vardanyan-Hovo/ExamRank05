#pragma once

#include "ASpell.hpp"

#include <iostream>
#include <string>




class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();


		
	
		virtual Fireball* clone() const;


};
