#pragma once

#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	private:
		TargetGenerator(TargetGenerator & other);
		TargetGenerator & operator=(TargetGenerator & rhs);
		std::map <std::string, ATarget *> targetsbook;

	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType (ATarget * target);
		void forgetTargetType (std::string const & target_type);
		ATarget *createTarget (std::string const & target);
};