#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell; 

class ATarget
{
	protected:
		std::string type;
		ATarget &operator=(ATarget &rhs);
		ATarget (ATarget & src);
		ATarget();

	public:
		ATarget(std::string const & type);
		std::string const & getType() const;
		virtual ~ATarget();
		void getHitBySpell(ASpell const & spell) const;
		virtual ATarget *clone() const = 0;
};