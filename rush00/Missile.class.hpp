/**
 * File              : Missile.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.05.2019
 * Last Modified Date: 05.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef MISSILE_CLASS_HPP
# define MISSILE_CLASS_HPP

#include "AEntity.class.hpp"
#include <ncurses.h>

class Missile : public AEntity {
	private:
		int _direction;

	public:

		Missile(void);
		Missile(Missile const & src);
		Missile(int y, int x, int dir);
		virtual	~Missile(void);

		void move(int upLimit, int downLimit);

		Missile &	operator=(Missile const &tmp);
};

#endif // MISSILE_CLASS_HPP
