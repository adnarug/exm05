#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock 
{
	private:
		std::string name;
		std::string title;
		Warlock();
		std::map <std::string, ASpell*> spells;
		Warlock operator=(Warlock& rhs);
		Warlock (Warlock & src);

	public:
		~Warlock();
		Warlock(std::string  const &  _name, std::string const &_title);
		std::string const &  getName() const; 
		std::string const &  getTitle() const;
		void setTitle(std::string const & title);
		void introduce() const;
		void learnSpell(ASpell * spell);
		void forgetSpell(std::string const & spell_name);
		void launchSpell(std::string const & spell_name, ATarget const & target);
};