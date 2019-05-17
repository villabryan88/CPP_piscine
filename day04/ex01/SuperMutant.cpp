/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 23:21:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
};

SuperMutant::SuperMutant(SuperMutant const & src): Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	*this = src;
};
SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
};

SuperMutant &		SuperMutant::operator=(SuperMutant const & rhs){
	(void)rhs;
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void SuperMutant::takeDamage(int damage) {
	if (damage < 3)
		Enemy::takeDamage(0);
	else
		Enemy::takeDamage(damage - 3);
}