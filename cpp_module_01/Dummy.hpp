#pragma once

#include "ATarget.hpp"

#include <iostream>
#include <string>




class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();


		
	
		virtual Dummy* clone() const;


};
