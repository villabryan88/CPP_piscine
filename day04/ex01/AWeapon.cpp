/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 22:06:35 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

AWeapon::AWeapon(void) {};

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	:_name(name),  _damage(damage), _aPCost(apcost) {
}

AWeapon::AWeapon(AWeapon const & src){
	*this = src;
};
AWeapon::~AWeapon(void) {};

AWeapon &		AWeapon::operator=(AWeapon const & rhs){
	(void)rhs;
	return (*this);
};

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

std::string const & AWeapon::getName() const {
	return (this->_name);
}

int					AWeapon::getAPCost() const {
	return(this->_aPCost);
}
int					AWeapon::getDamage() const {
	return(this->_damage);
}