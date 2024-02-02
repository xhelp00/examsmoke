#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{
	for (std::vector<ATarget*>::iterator it = _book.begin(); it != _book.end(); )
	{
		delete *it;
		it = _book.erase(it);
	}

}

void 	TargetGenerator::learnTargetType(ATarget* spell)
{
	for (std::vector<ATarget*>::iterator it = _book.begin(); it != _book.end(); it++)
		if ((*(*it)).getType() == (*spell).getType() )
			return ;
		_book.push_back(spell->clone());
}

void 	TargetGenerator::forgetTargetType(const std::string &spell)
{
	for (std::vector<ATarget*>::iterator it = _book.begin(); it != _book.end(); )
		if ((*(*it)).getType() == spell )
		{
			delete *it;
			it = _book.erase(it);
		}
		else
			it++;
}

ATarget* TargetGenerator::createTarget(const std::string &spell)
{
	for (std::vector<ATarget*>::iterator it = _book.begin(); it != _book.end(); it++)
		if ((*(*it)).getType() == spell )
		{
			return (*(*it)).clone();
		}
	return NULL;
}