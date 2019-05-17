/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 22:36:28 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Enemy::Enemy(void) {};

Enemy::Enemy(int hp, std::string const & type): _hP(hp), _type(type) {};

Enemy::Enemy(Enemy const & src){
	*this = src;
};

Enemy::~Enemy(void) {};

Enemy &		Enemy::operator=(Enemy const & rhs){
	(void)rhs;
	return (*this);
};

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

std::string const &	Enemy::getType() const {
	return(this->_type);
}
int					Enemy::getHP() const {
	return(this->_hP);
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void	Enemy::takeDamage(int damage) {
	if (damage > this->_hP)
		this->_hP = 0;
	else
		this->_hP -= damage;
}