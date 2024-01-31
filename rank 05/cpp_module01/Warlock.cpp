#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name) , _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;

}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;

}

void		Warlock::setTitle(const std::string &title)
{
	this->_title = title;
}

const std::string&	Warlock::getName() const
{
	return this->_name;
}

const std::string&	Warlock::getTitle() const
{
	return this->_title;
}

void		Warlock::introduce() const
{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}