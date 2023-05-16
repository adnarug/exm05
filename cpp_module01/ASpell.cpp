#include "ASpell.hpp"

ASpell::ASpell (std::string const & _name, std::string const & _effects) : name(_name), effects(_effects)
{};

std::string const & ASpell::getName() const
{
    return name;
}

std::string const & ASpell::getEffects() const
{
    return effects;
}

void ASpell::launch (ATarget const & target) const
{
    target.getHitBySpell(*this);
}

ASpell::~ASpell()
{}
