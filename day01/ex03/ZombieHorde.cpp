/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 21:29:27 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->_n = n;
	this->_zombies = new Zombie[n];
};

ZombieHorde::~ZombieHorde(void) {
	delete [] this->_zombies;
};

void	ZombieHorde::announce(void) const {
	for(int i = 0; i < this->_n; i++)
		this->_zombies[i].announce();
}
