#pragma once

#include <iostream>

class Warlock 
{
	private:
		std::string name;
		std::string title;
		Warlock();
		Warlock operator=(Warlock& rhs);
		Warlock (Warlock & src);

	public:
		~Warlock();
		Warlock(std::string  const &  _name, std::string const &_title);
		std::string const &  getName() const; 
		std::string const &  getTitle() const;
		void setTitle(std::string const & title);
		void introduce() const;
};