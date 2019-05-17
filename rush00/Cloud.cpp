/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cloud.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/05 20:47:11 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cloud.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Cloud::Cloud(void): AEntity() {};

Cloud::Cloud(int y, int x): AEntity(y, x, ACS_CKBOARD, COLOR_PAIR(3), 0) {}

Cloud::Cloud(Cloud const & src): AEntity(){
	*this = src;
};
Cloud::~Cloud(void) {};

Cloud &		Cloud::operator=(Cloud const & rhs){
	(void)rhs;
	return (*this);
};

int		Cloud::update(int limit) {
	(void)limit;
	return (0);
}
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

