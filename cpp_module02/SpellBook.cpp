#include "SpellBook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it_b = spellbook.begin();
	std::map<std::string, ASpell *>::iterator it_e = spellbook.end();
	while (it_b != it_e)
	{
		delete it_b->second;
		++it_b;
	};
	spellbook.clear();
}

void SpellBook::learnSpell(ASpell * spell)
{
	if (spellbook.find(spell->getName()) != spellbook.end())
		return ;
	spellbook.insert(std::pair <std::string, ASpell * >(spell->getName(), spell->clone()));

}

void SpellBook::forgetSpell(std::string const & spell_name)
{
	std::map<std::string, ASpell * >::iterator it = spellbook.find(spell_name);
	if (it == spellbook.end())
		return ;
	if (it->second)
		delete it->second;
	spellbook.erase(spell_name);
}

ASpell * SpellBook::createSpell(std::string const & spell_name)
{
	std::map<std::string, ASpell * >::iterator it = spellbook.find(spell_name);
	if (it->second)
		return (spellbook[spell_name]);
	else
		return NULL;
}
