#pragma once

#include "ATarget.hpp"
#include "ATarget.hpp"
#include <map>
#include <iostream>
#include <string>


class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator const &w);
		TargetGenerator &operator=(TargetGenerator const &w);


	public:
		TargetGenerator();
		~TargetGenerator();

	
		
		void learnTargetType(ATarget*a);
		void forgetTargetType(std::string const &s);
		ATarget* createTarget(std::string const &s);
	private:
		std::map<std::string, ATarget *> book;
};
