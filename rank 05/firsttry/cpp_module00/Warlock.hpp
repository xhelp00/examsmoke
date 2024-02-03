#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock
{
	public:
				std::string		_name;
				std::string		_title;

				Warlock(const std::string &name, const std::string &title);
				~Warlock();
				void		setTitle(const std::string &title);
				const std::string&	getName() const;
				const std::string&	getTitle() const;

				void		introduce() const;

	private:
				Warlock();
				Warlock(const Warlock &other);
				Warlock& operator=(const Warlock &other);

};

#endif