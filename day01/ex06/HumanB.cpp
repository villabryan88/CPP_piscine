/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 01:48:19 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_weapon = NULL;
	this->_name = name;
}

void	HumanB::attack(void) const {
	std::string weapon = "hands";
	if (this->_weapon)
		weapon = this->_weapon->getType();
	std::cout << this->_name << " attacks with his " << weapon << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}