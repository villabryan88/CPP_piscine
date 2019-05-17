/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:18:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
		std::cout << "ClapTrap with no name born" << std::endl;	
};

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;

	std::cout << "ClapTrap born" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const & src){
	*this = src;

	std::cout << "ClapTrap born" << std::endl;
};
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap died" << std::endl;
};

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs){
	this->_hitPoints = rhs.getHitPoints();
	this->_maxHitPoints = rhs.getMaxHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
	this->_rangedAttackDamage = rhs.getRangedAttackDamage();
	this->_armorDamageReduction = rhs.getArmorDamageReduction();

	return (*this);
};


//////////////////////////////////////////
//        getters and setters          	//
//////////////////////////////////////////

unsigned int	ClapTrap::getHitPoints() const {
	return(this->_hitPoints);
}
unsigned int	ClapTrap::getMaxHitPoints() const {
	return(this->_maxHitPoints);
}
unsigned int	ClapTrap::getEnergyPoints() const {
	return(this->_energyPoints);
}
unsigned int	ClapTrap::getMaxEnergyPoints() const {
	return(this->_maxEnergyPoints);
}
unsigned int	ClapTrap::getLevel() const {
	return(this->_level);
}
std::string		ClapTrap::getName() const {
	return(this->_name);
}
unsigned int	ClapTrap::getMeleeAttackDamage() const {
	return(this->_meleeAttackDamage);
}
unsigned int	ClapTrap::getRangedAttackDamage() const {
	return(this->_rangedAttackDamage);
}
unsigned int	ClapTrap::getArmorDamageReduction() const {
	return(this->_armorDamageReduction);
}

unsigned int	ClapTrap::setHitPoints(unsigned int set){
	if (set > this->getMaxHitPoints())
		set = this->getMaxHitPoints();
	this->_hitPoints = set;
	return (set);
}
void	ClapTrap::setMaxHitPoints(unsigned int set){
	this->_maxHitPoints = set;
}
unsigned int	ClapTrap::setEnergyPoints(unsigned int set){
	if (set > this->getMaxEnergyPoints())
		set = this->getMaxEnergyPoints();
	this->_energyPoints = set;
	return (set);
}

void	ClapTrap::setMaxEnergyPoints(unsigned int set){
	this->_maxEnergyPoints = set;
}
void	ClapTrap::setLevel(unsigned int set){
	this->_level = set;
}
void	ClapTrap::setName(std::string set){
	this->_name = set;
}
void	ClapTrap::setMeleeAttackDamage(unsigned int set){
	this->_meleeAttackDamage = set;
}
void	ClapTrap::setRangedAttackDamage(unsigned int set){
	this->_rangedAttackDamage = set;
}
void	ClapTrap::setArmorDamageReduction(unsigned int set){
	this->_armorDamageReduction = set;
}

void			ClapTrap::rangedAttack(std::string const & model, std::string const & target){
	std::cout << model << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

void			ClapTrap::meleeAttack(std::string const & model, std::string const & target){
	std::cout << model << this->_name << " attacks " << target;
	std::cout << " melee style, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

unsigned int	ClapTrap::takeDamage(unsigned int amount){
	unsigned int	oldHP = this->getHitPoints();

	if (amount < this->getArmorDamageReduction())
		amount = 0;
	else
		amount -= this->getArmorDamageReduction();
		
	if (amount > this->getHitPoints())
		this->setHitPoints(0);
	else
		this->setHitPoints(this->getHitPoints() - amount);
	amount = oldHP - this->getHitPoints();
	return (amount);
};

unsigned int	ClapTrap::beRepaired(unsigned int amount){
	unsigned int oldHitPoints = this->getHitPoints();
	unsigned int newHitPoints = this->setHitPoints(oldHitPoints + amount);
	return (newHitPoints - oldHitPoints);
};
