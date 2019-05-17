/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 18:52:53 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////
Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string const & name, std::string const & title)
	:_name(name), _title(title)	{
		std::cout << this->getName() + ", " << this->getTitle() << ", is born !";
		std::cout << std::endl;
};

Sorcerer::Sorcerer(Sorcerer const & src){
	*this = src;
	std::cout << this->getName() + ", " << this->getTitle() << ", is born !";
	std::cout << std::endl;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->getName() + ", " << this->getTitle() << ", is dead. ";
	std::cout << "Consequences will never be the same !" << std::endl;
};

Sorcerer &		Sorcerer::operator=(Sorcerer const & rhs){
	this->setTitle(rhs.getName());
	this->setTitle(rhs.getTitle());
	
	return (*this);
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer) {
	o << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + ", and I like ponies !";
	o << std::endl;
	return (o);
}

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

void Sorcerer::setName(std::string const & set) {
	this->_name = set;
}

void Sorcerer::setTitle(std::string const & set) {
	this->_title = set;
}

std::string const & Sorcerer::getName(void) const {
	return (this->_name);
}
std::string const & Sorcerer::getTitle(void) const {
	return (this->_title);
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}