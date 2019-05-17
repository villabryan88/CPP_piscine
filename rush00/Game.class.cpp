/**
 * File              : Game.class.cpp
 * Author            : pdeguing <pdeguing@student.42.us.org>
 * Date              : 05.05.2019
 * Last Modified Date: 05.05.2019
 * Last Modified By  : pdeguing <pdeguing@student.42.us.org>
 */

#include "Game.class.hpp"


Game::Game(void) : _status(GAME_DEFAULT), _player(NULL), _clock(0) {
	return ;
}

Game::Game(Game const & src) {
	*this = src;
	return ;
}

Game::~Game(void) {
	return ;
}

Game &	Game::operator=(Game const & tmp) {
	if (this == &tmp)
		return *this;
	return *this;
}

void	Game::init() {
	int	starty, startx;
	char	msg[] = "PRESS Q TO EXIT";

	//std::cerr << "game.init()\n";
	// this->_status = GAME_DEFAULT;
	for (int i = 0; i < N_ENTITIES; i++) {
		this->_entities[i] = NULL;
		this->_missilesPlayer[i] = NULL;
	}

	this->_score = 0;
	this->_lives = 5;
	this->_clock = 0;

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	nodelay(stdscr, TRUE);
	curs_set(0);

	start_color();
	init_color(COLOR_BLACK, 18, 18, 18);
	init_pair(0, COLOR_WHITE, COLOR_BLACK);
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(3, COLOR_WHITE, COLOR_BLACK);
	init_pair(4, COLOR_CYAN, COLOR_BLACK);
	init_pair(5, COLOR_YELLOW, COLOR_BLACK);	

	starty = (LINES - HEIGHT) / 2;
	startx = (COLS - WIDTH) / 2;

	attron(A_BOLD);
	mvprintw(1, (COLS - strlen(msg)) / 2, "%s", msg);
	attroff(A_BOLD);
	refresh();

	this->_wgame = createWindow(HEIGHT, WIDTH, starty, startx);
	this->_player = new AEntity(HEIGHT - 3, WIDTH / 2);

	this->generateClouds();
}

void	Game::generateClouds() {
	this->_entities[0] = new Cloud(38, 10);
	this->_entities[1] = new Cloud(23, 13);
	this->_entities[2] = new Cloud(31, 58);
	this->_entities[3] = new Cloud(27, 21);
	this->_entities[4] = new Cloud(8, 9);
	this->_entities[5] = new Cloud(22, 51);
	this->_entities[6] = new Cloud(37, 32);
	this->_entities[7] = new Cloud(28, 48);
	this->_entities[8] = new Cloud(11, 27);
	this->_entities[9] = new Cloud(2, 48);
}

void	Game::input() {
	int	ch;

	//std::cerr << "game.input()\n";
	ch = getch();

	if (ch == KEY_R && this->_status == GAME_RESTART)
		this->_status = GAME_DEFAULT;

	switch (ch) {

		case KEY_QUIT:
			this->_status = GAME_OVER;
			break ;

		case KEY_SPACE:
			this->insertMissile(-1, 0, 0);
			break ;

		case KEY_LEFT:
			this->_player->moveLeft(0);
			break ;

		case KEY_RIGHT:
			this->_player->moveRight(WIDTH);
			break ;

		default:
			break ;
	}

}

void	Game::update() {
	//std::cerr << "game.update()\n";
	if (this->_clock % 10 == 0) {
		for (int i = 0; i < N_ENTITIES; i++) {
			if (!this->_entities[i])
				continue ;
			if(this->_entities[i]->update(HEIGHT))
				this->insertMissile(1, this->_entities[i]->getY() + 3, this->_entities[i]->getX());
			if (this->_entities[i]->getY() >= HEIGHT - 1) {
				delete this->_entities[i];
				this->_entities[i] = NULL;
			}
		}
		this->spawnEnemies();
	}
	if (this->_clock % 5 == 0) {
		for (int i = 0; i < N_ENTITIES; i++) {
			if (!this->_missilesPlayer[i])
				continue ;
			((Missile*)(this->_missilesPlayer[i]))->move(0, HEIGHT - 1);
			if (this->_missilesPlayer[i]->getY() <= 0 || this->_missilesPlayer[i]->getY() >= HEIGHT - 2) {
				delete this->_missilesPlayer[i];
				this->_missilesPlayer[i] = NULL;
			}
		}
	}
	this->resolveCollisions();
}

void	Game::render() const {
	AEntity	*currEntity;
	std::string gameStats;
	int	seconds = this->_clock * 39 / 46 / 100;
	//std::cerr << "game.render()\n";
	wclear(this->_wgame);
	//wattron(this->_wgame, COLOR_PAIR(0) | A_BOLD);
	//box(this->_wgame, 0, 0);
	//wattroff(this->_wgame, COLOR_PAIR(0) | A_BOLD);
	wattron(this->_wgame, COLOR_PAIR(0));
	mvwaddch(this->_wgame, this->_player->getY(), this->_player->getX(), ACS_UARROW);
	wattroff(this->_wgame, COLOR_PAIR(0));
	for (int i = 0; i < N_ENTITIES; i++) {
		currEntity = this->_entities[i];
		if (!currEntity)
			continue ;
		wattron(this->_wgame, currEntity->getAttr());
		if (currEntity->getSize() == 3)
			mvwaddch(this->_wgame, currEntity->getY(), currEntity->getX() - 1, '<');
		mvwaddch(this->_wgame, currEntity->getY(), currEntity->getX(), currEntity->getCh());
		if (currEntity->getSize() == 3)
			mvwaddch(this->_wgame, currEntity->getY(), currEntity->getX() + 1, '>');;
		wattroff(this->_wgame, currEntity->getAttr());
	}
	for (int i = 0; i < N_ENTITIES; i++) {
		currEntity = this->_missilesPlayer[i];
		if (!currEntity)
			continue ;
		wattron(this->_wgame, currEntity->getAttr());
		mvwaddch(this->_wgame, currEntity->getY(), currEntity->getX(), currEntity->getCh());
		wattroff(this->_wgame, currEntity->getAttr());
	}

	gameStats = "Score: " + std::to_string(this->_score) + "    Lives: " + std::to_string(this->_lives) + "     Time: " + std::to_string(seconds) + "s";
	wattron(this->_wgame, COLOR_PAIR(0));
	mvprintw(5, (COLS - strlen(gameStats.c_str())) / 2, "%s", gameStats.c_str());
	wattroff(this->_wgame, COLOR_PAIR(0));	
	wrefresh(this->_wgame);
}

void	Game::askRestart() const {
	std::string restart = "Press R to Restart Q to quit";

	wclear(this->_wgame);
	wattron(this->_wgame, COLOR_PAIR(0));
		mvprintw(30, (COLS - strlen(restart.c_str())) / 2, "%s", restart.c_str());
	wattroff(this->_wgame, COLOR_PAIR(0));	
	wrefresh(this->_wgame);	
}

void	Game::resolveCollisions() {
	int		delta;
	//std::cerr << "game.resolveCollisions()\n";
	for (int i = 0; i < N_ENTITIES; i++)
	{
		if (this->_entities[i]) 
		{
			if (this->_entities[i]->getSize() == 3)
				delta = 1;
			else
				delta = 0;
			
			if (this->_player->getY() == this->_entities[i]->getY()
					&& this->_player->getX() - this->_entities[i]->getX() <= delta
					&& this->_player->getX() - this->_entities[i]->getX() >= -(delta))
			{
				this->_lives--;
				if (this->_lives == 0){
					this->_status = GAME_RESTART;
					return ;
				}
				else
				{
					delete this->_entities[i];
					this->_entities[i] = NULL;
					break;
				}
				
			}

			for (int j = 0; j < N_ENTITIES; j++) 
			{
				if (this->_missilesPlayer[j] 
						&& this->_entities[i]->getY() == this->_missilesPlayer[j]->getY()
						&& this->_entities[i]->getX() == this->_missilesPlayer[j]->getX()
						&& this->_entities[i] != this->_missilesPlayer[j]
						&& this->_entities[i]->getCollidable()) {
					delete this->_entities[i];
					delete this->_missilesPlayer[j];
					this->_entities[i] = NULL;
					this->_missilesPlayer[j] = NULL;
					this->_score++;
					break ;
				}
			}
		}
	}
	for (int j = 0; j < N_ENTITIES; j++) 
	{
		if (this->_missilesPlayer[j] 
				&& this->_player->getY() == this->_missilesPlayer[j]->getY()
				&& this->_player->getX() == this->_missilesPlayer[j]->getX()) {
			delete this->_missilesPlayer[j];
			this->_missilesPlayer[j] = NULL;
			this->_lives--;
			if (this->_lives == 0){
				this->_status = GAME_RESTART;
				return ;
			};
			break ;
		}
	}
}

void	Game::spawnEnemies() {
	//std::cerr << "game.spawnEnemies()\n";
	AEntity *new_entity = NULL;

	for (int i = 1; i < WIDTH - 1; i++) {
		if ((rand() % 100) < 1) {
			if (i < WIDTH - 4 && rand() % 5 < 1)
			{
				new_entity = new Enemy(1, i + 1);
				i += 3;
			}
			else
				new_entity =  new Asteroid(1, i);	
			for (int j = 0; j < N_ENTITIES; j++) {
				if (!this->_entities[j]) {
					this->_entities[j] = new_entity;
					break ;
				}
			}
		}
	}
}

WINDOW*	Game::createWindow(int height, int width, int y, int x) {
	WINDOW	*newWin;

	newWin = newwin(height, width, y, x);
	/*
	wattron(newWin, COLOR_PAIR(0) | A_BOLD);
	box(newWin, 0, 0);
	wattroff(newWin, COLOR_PAIR(0) | A_BOLD);
	*/

	wrefresh(newWin);

	return newWin;
}

void	Game::upClock() {
	this->_clock++;
}

void	Game::insertMissile(int dir, int y, int x) {
	if (dir == -1)
	{
		y = this->_player->getY() - 1;
		x = this->_player->getX();
	}
	for (int j = 0; j < N_ENTITIES; j++) {
		if (!this->_missilesPlayer[j]) {
			this->_missilesPlayer[j] = new Missile(y, x, dir);
			break ;
		}
	}
}

int	Game::getStatus() const {
return this->_status;
}
