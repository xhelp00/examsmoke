#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	public:
			const std::string		 &getName() const;
			const std::string		 &getTitle() const;

			Warlock(std::string const&, std::string const&);
			
			void	setTitle(std::string const&);
			void	introduce() const;

			~Warlock();

	private:

			std::string		_name;
			std::string		_title;

			Warlock();
			Warlock(const Warlock &other);
			Warlock &operator=(const Warlock &other);

};

#endif