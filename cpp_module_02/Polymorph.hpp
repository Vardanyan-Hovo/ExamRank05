#pragma once

#include "ASpell.hpp"

#include <iostream>
#include <string>




class Polymorph : public ASpell
{
	public:
		Polymorph();
		~Polymorph();


		
	
		virtual Polymorph* clone() const;


};
