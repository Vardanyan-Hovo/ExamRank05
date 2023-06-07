#pragma once

#include "ATarget.hpp"

#include <iostream>
#include <string>




class BrickWall : public ATarget
{
	public:
		BrickWall();
		~BrickWall();


		
	
		virtual BrickWall* clone() const;


};
