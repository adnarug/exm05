#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		SpellBook(SpellBook & other);
		SpellBook & operator=(SpellBook & rhs);
		std::map <std::string, ASpell *> spellbook;

	public:
		SpellBook();
		~SpellBook();
		void learnSpell (ASpell * spell);
		void forgetSpell (std::string const & spell_name);
		ASpell *createSpell(std::string const & spell_name);
};