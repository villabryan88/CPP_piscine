/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 21:30:48 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define  ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {
	private:
		Zombie	*_zombies;
		int		_n;
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void) const;
};

#endif
