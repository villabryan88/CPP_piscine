/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 20:29:25 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"


void ZombieEvent::setZombieType(std::string type) {
	this->_zombieType = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const{
	return (new Zombie(name, this->_zombieType));
}

void	ZombieEvent::randomChump(void) const {
	std::string zombieNames[] = {"Jeff", "Jackson", "Abdul", "Jordan",
			"Bzilla", "Jaime", "Skunz", "Kalindi", "Liam"};
	Zombie chump = Zombie(zombieNames[rand() % 9], this->_zombieType);
	chump.announce();
}