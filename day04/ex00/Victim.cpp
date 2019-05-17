/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 18:56:12 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////
Victim::Victim(void) {};

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " + this->getName();
	std::cout << " just popped !" << std::endl;
}
Victim::Victim(Victim const & src){
	*this = src;
	std::cout << "Some random victim called " + this->getName();
	std::cout << " just popped !" << std::endl;
};
Victim::~Victim(void) {
	std::cout << "Victim " + this->getName() + " just died for no apparent reason !";
	std::cout << std::endl;
};

Victim &		Victim::operator=(Victim const & rhs){
	this->setName(rhs.getName());

	return(*this);
};

std::ostream &	operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " + rhs.getName() + " and I like otters !" << std::endl;
	return (o);
}

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

void Victim::setName(std::string const & set) {
	this->_name = set;
}

std::string const & Victim::getName(void) const {
	return(this->_name);
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void Victim::getPolymorphed(void) const{
	std::cout << this->getName() << " has been turned into a cute little sheep !";
	std::cout << std::endl;
}