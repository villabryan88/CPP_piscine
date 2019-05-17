/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:40:38 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:46:35 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->_name = name;

	std::cout << "A beautiful horse, " << name << ", was born." << std::endl;
}
Pony::~Pony(void) {
	std::cout << "OH NO! " << this->_name << " has died!!!" << std::endl;
}


void	Pony::makeNoise(void) const {
	std::cout << this->_name << " says heeeeeeey!" << std::endl;
}
void	Pony::gallop(void) const {
	std::cout << this->_name << " is running like a mother-" << std::endl;
}
void	Pony::kickInAir(void) const {
	std::cout << this->_name << " thrusts his front legs in the air kicking magnificently." << std::endl;
}

