/**
 * File              : Missile.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.05.2019
 * Last Modified Date: 05.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Missile.class.hpp"

Missile::Missile(void) {
	return ;
}

Missile::Missile(Missile const & src) {
	*this = src;
	return ;
}

Missile &	Missile::operator=(Missile const &tmp) {
	(void)tmp;
	return(*this);
};

Missile::Missile(int y, int x, int dir) : AEntity(y, x, ACS_BULLET, COLOR_PAIR(0), 1), _direction(dir) {
}

void Missile::move(int upLimit, int downLimit) {
	if (this->_direction == -1)
	{
		if (this->y > upLimit)
			this->y--;
	}
	if (this->_direction == 1)
	{
		if (this->y < downLimit - 1)
			this->y++;
	}
}

Missile::~Missile(void) {
	return ;
}
