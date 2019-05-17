/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 21:45:27 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::string zombieNames[] = {"Jeff", "Jackson", "Abdul", "Jordan",
			"Bzilla", "Jaime", "Skunz", "Kalindi", "Liam"};
	std::string zombieTypes[] = {"ballerina", "teacher", "dish washer",
			"football player", "soccer mom", "coach", "runner"};
	this->_name = zombieNames[rand() % 9];
	this->_type = zombieTypes[rand() % 7];
}

Zombie::Zombie(std::string name, std::string type) :  _type(type), _name(name) {
	return ;
};

Zombie::~Zombie() {
	std::cout << this->_name << " has returned to the land of the dead." << std::endl;
	return ;
};

void	Zombie::announce(void) const {
	std::cout << "<" + this->_name + " (" + this->_type;
	std::cout << ")> Braiiiiiiinnnssss..." << std::endl; 
}