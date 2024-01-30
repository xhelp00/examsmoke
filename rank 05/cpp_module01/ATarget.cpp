#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type)
{
	//std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

ATarget::~ATarget()
{

	//std::cout << this->_name << ": My job here is done!" << std::endl;
}



const std::string&
ATarget::getType() const
{
	return this->_type;
}


