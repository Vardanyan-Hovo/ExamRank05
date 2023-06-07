#pragma once


#include <iostream>
#include <string>


class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const &w);
		Warlock &operator=(Warlock const &w);
	public:
		Warlock(std::string const &n, std::string const &t);
		~Warlock();

	public:
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &t);
		
		void introduce() const;

	private:
		std::string name;
		std::string title;

};
