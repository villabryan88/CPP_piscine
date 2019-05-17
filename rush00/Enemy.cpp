/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/05 21:31:22 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Enemy::Enemy(void) {};
Enemy::Enemy(Enemy const & src){
	*this = src;
};
Enemy::~Enemy(void) {};

Enemy::Enemy(int y, int x) : AEntity(y, x, 'v', COLOR_PAIR(4), 1) {
	this->size = 3;
}

Enemy &		Enemy::operator=(Enemy const & rhs){
	(void)rhs;
	return (*this);
};

int		Enemy::update(int limit) {
	AEntity::update(limit);

	if (rand() % 20 < 1)
		return (1);
	return (0);
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

