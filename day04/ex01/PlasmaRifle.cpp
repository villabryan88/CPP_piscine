/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 22:02:26 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21){};

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src): AWeapon("Plasma Rifle", 5, 21){
	(void)src;
};

PlasmaRifle::~PlasmaRifle(void) {};

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs){
	(void)rhs;
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void 	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

