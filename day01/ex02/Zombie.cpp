/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 20:33:31 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) :  _type(type), _name(name) {
	return ;
};

Zombie::~Zombie() {
	std::cout << this->_name << " has returned to the land of the dead." << std::endl;
	std::cout << std::endl;
	return ;
};

void	Zombie::announce(void) const {
	std::cout << "<" + this->_name + " (" + this->_type;
	std::cout << ")> Braiiiiiiinnnssss..." << std::endl; 
}