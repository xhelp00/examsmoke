#ifndef TargetGenerator_HPP
#define TargetGenerator_HPP

#include <string>
#include <vector>

class ATarget;

class TargetGenerator
{
	public:
				TargetGenerator();
				~TargetGenerator();

				void 	learnTargetType(ATarget* spell);
				void 	forgetTargetType(const std::string &spell);
				ATarget* createTarget(const std::string &spell);

	private:
				std::vector<ATarget*> _book;

				TargetGenerator(const TargetGenerator &ref);
				TargetGenerator &operator=(const TargetGenerator &ref);


};

#include "ATarget.hpp"

#endif