/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 18:55:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Peon::Peon(void): Victim(""){};
Peon::Peon(std::string name): Victim(name){
	std::cout << "Zog zog." << std::endl;
};
Peon::Peon(Peon const & src): Victim(src){
	*this = src;
	std::cout << "Zog zog." << std::endl;
};
Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
};

Peon &		Peon::operator=(Peon const & rhs){
	this->setName(rhs.getName());
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

void Peon::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a pink pony !";
	std::cout << std::endl;
}