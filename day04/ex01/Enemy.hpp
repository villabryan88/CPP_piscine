/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 23:08:34 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define  ENEMY_HPP
# include <string>

class Enemy {
	private:
		int			_hP;
		std::string	_type;
		Enemy(void);
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy();
		
		Enemy &		operator=(Enemy const & rhs);

		std::string const &	getType() const;
		int					getHP() const;

		virtual void takeDamage(int);
};

#endif
