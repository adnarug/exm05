#include "ATarget.hpp"

ATarget::ATarget (std::string const & _type) : type(_type)
{}

std::string const & ATarget::getType() const
{
	return type;
}


ATarget::~ATarget()
{
	return;
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << '!' << std::endl;
	return ;
}