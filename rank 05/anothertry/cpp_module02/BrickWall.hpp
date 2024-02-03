#ifndef BrickWall_HPP
#define BrickWall_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
				BrickWall();
				virtual ~BrickWall();
				BrickWall(const BrickWall &other);
				BrickWall& operator=(const BrickWall &other);

				virtual BrickWall* clone() const;

				//void launch(const ATarget& ref) const;
				//void setTitle(const std::string &title);
				//void introduce() const;

				
};



#endif