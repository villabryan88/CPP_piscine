/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 22:02:50 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

PowerFist::PowerFist(void): AWeapon("PowerFist", 8, 50) {};

PowerFist::PowerFist(PowerFist const & src): AWeapon("PowerFist", 8, 50) {
	(void)src;
};

PowerFist::~PowerFist(void) {};

PowerFist &		PowerFist::operator=(PowerFist const & rhs){
	(void)rhs;
	return (*this);
};
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void 	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

