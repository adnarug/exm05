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