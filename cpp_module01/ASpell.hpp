#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;
		ASpell &operator=(ASpell const &rhs);
		ASpell (ASpell const & src);
		ASpell();
	public:
		ASpell(std::string const & name, std::string const & effects);
		std::string const & getName() const;
		std::string const & getEffects() const;
		virtual ASpell * clone() const = 0;
		virtual ~ASpell();
		void launch(ATarget const & target) const; 

};