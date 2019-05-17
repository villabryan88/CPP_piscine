/**
 * File              : Game.class.hpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.05.2019
 * Last Modified Date: 05.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#ifndef GAME_CLASS_HPP
# define GAME_CLASS_HPP

#include <ncurses.h>
#include <string.h>
#include <unistd.h>

#include "AEntity.class.hpp"
#include "Asteroid.class.hpp"
#include "Missile.class.hpp"
#include "Enemy.hpp"
#include "Cloud.hpp"

#define N_ENTITIES	1000

#define GAME_DEFAULT	0
#define GAME_OVER	1
#define GAME_RESTART 2

#define HEIGHT		51
#define WIDTH		61

#define BOTTOM	(LINES - ((LINES - HEIGHT) / 2))

#define KEY_SPACE	' '
#define KEY_QUIT	'q'
#define KEY_R 'r'

class Game {
	private:
		Game(Game const & src);



		int		_status;
		int		_score;
		int		_lives;

		AEntity* 	_player;
		AEntity*	_entities[N_ENTITIES];
		AEntity*	_missilesPlayer[N_ENTITIES];

		WINDOW*		_wgame;

		int		_clock;
		
	public:

		Game(void);
		virtual	~Game(void);
		Game &	operator=(Game const &tmp);

		void	init();
		void	input();
		void	update();
		void	askRestart() const;
		void	render() const;

		void	resolveCollisions();
		
		void	spawnEnemies();

		void	generateClouds();

		WINDOW*	createWindow(int height, int width, int y, int x);

		void	upClock();

		void	insertMissile(int dir, int y, int x);

		int	getStatus() const;
};

#endif // GAME_CLASS_HPP
