#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
    std::map < std::string, ATarget *> ::iterator it_b = targetsbook.begin();
    std::map < std::string, ATarget *> ::iterator it_e = targetsbook.end();
    while (it_b != it_e)
    {
        delete it_b->second;
        ++it_b;
    }
    this->targetsbook.clear();

}

void TargetGenerator::learnTargetType (ATarget * target)
{
	if (targetsbook.find(target->getType()) != targetsbook.end())
		return ;
	targetsbook.insert(std::pair <std::string, ATarget * >(target->getType(), target->clone()));

}

void TargetGenerator::forgetTargetType (std::string const & target_type)
{
	std::map<std::string, ATarget * >::const_iterator it = targetsbook.find(target_type);
	if (it == targetsbook.end())
		return ;
	if (it->second)
		delete it->second;
	targetsbook.erase(target_type);
}

ATarget * TargetGenerator::createTarget (std::string const & target)
{
	std::map<std::string, ATarget * >::const_iterator it = targetsbook.find(target);
	if (it->second)
		return (targetsbook[target]);
	else
		return NULL;
}
