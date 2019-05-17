/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/05 20:51:43 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define  ENEMY_HPP
# include "AEntity.class.hpp"
# include <cstdlib>
#include <ncurses.h>

class Enemy : public AEntity {
	private:

	public:
		Enemy(void);
		Enemy(Enemy const & src);
		Enemy(int y, int x);
		virtual ~Enemy(void);

		Enemy &		operator=(Enemy const & rhs);

		virtual int		update(int limit);

};

#endif
