/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 23:28:20 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
};

RadScorpion::RadScorpion(RadScorpion const & src): Enemy(80, "RadScorpion"){
	*this = src;
	std::cout << "* click click click *" << std::endl;
};
RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
};

RadScorpion &		RadScorpion::operator=(RadScorpion const & rhs){
	(void)rhs;
	return (*this);
};
