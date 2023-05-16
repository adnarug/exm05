#include "Warlock.hpp"

Warlock::~Warlock()
{
	std::cout << name  << ": My job here is done!" << std::endl;
	return;
}

Warlock::Warlock(std::string const &  _name, std::string const &_title) : name(_name), title(_title)
{
	std::cout << name << ": This looks like another boring day." << std::endl;
}

std::string const &  Warlock::getName() const
{
	return name;
}
std::string const &  Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(std::string const & _title)
{
	this->title = _title;
	return; 
}

void Warlock::introduce()const 
{
	std::cout<< name << ':' << " I am " << name << ", "  << title <<  '!' << std::endl;

}

void Warlock::learnSpell(ASpell * spell)
{
	if (spells.find(spell->getName()) != spells.end())
		return ;
	spells.insert(std::pair <std::string, ASpell * >(spell->getName(), spell->clone()));

}

void Warlock::forgetSpell(std::string const & spell_name)
{
	std::map<std::string, ASpell * >::iterator it = spells.find(spell_name);
	if (it == spells.end())
		return ;
	if (it->second)
		delete it->second;
	spells.erase(spell_name);
}

void Warlock::launchSpell(std::string const & spell_name, ATarget const & target)
{
	std::map<std::string, ASpell * >::iterator it = spells.find(spell_name);
	if (it == spells.end())
		return ;
	if (it->second)
		it->second->launch(target);
}