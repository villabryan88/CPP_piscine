/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/04 02:00:11 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Character::Character(void) {};

Character::Character(std::string const & name): _name(name), _aP(40), _weapon(NULL){};

Character::Character(Character const & src){
	*this = src;
};
Character::~Character(void) {};

Character &		Character::operator=(Character const & rhs){
	this->_name = rhs._name;
	this->_aP = rhs._aP;
	this->_weapon = rhs._weapon;
	return (*this);
};

std::ostream &	operator<<(std::ostream & o, Character const & rhs) {
	if (rhs.getWeapon())
	{
		std::cout << rhs.getName() << " has " << rhs.getAP() << " AP and wields a ";
		std::cout << rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		std::cout << rhs.getName() << " has " << rhs.getAP() << " AP and ";
		std::cout << "is unarmed" << std::endl;
	}
	return (o);
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void Character::recoverAP(){
	this->_aP += 10;
	if (this->_aP > 40)
		this->_aP = 40;
}
void Character::equip(AWeapon *weapon){
	this->_weapon = weapon;
}
void Character::attack(Enemy *enemy){
	int weaponAP;

	if (!this->_weapon)
		return ;

	weaponAP = this->_weapon->getAPCost();
	if (this->_aP < weaponAP)
		return ;
	this->_aP -= weaponAP;
	std::cout << this->_name << " attacks " << enemy->getType();
	std::cout << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;	
}

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

std::string const & Character::getName() const {
	return(this->_name);
}

int const &			Character::getAP() const {
	return(this->_aP);
}
AWeapon *			Character::getWeapon() const {
	return(this->_weapon);
}