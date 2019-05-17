/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:17:28 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap with no name: ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;	
};

ScavTrap::ScavTrap(std::string name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap" << name << ": ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;
};
ScavTrap::ScavTrap(ScavTrap const & src){
	*this = src;
	std::cout << "ScavTrap" << this->getName() << ": ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;
};
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->_name << ": ";
	std::cout << "Peace out brother!" << std::endl;
};

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs){
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

unsigned int	ScavTrap::getHitPoints() const {
	return(this->_hitPoints);
}
unsigned int	ScavTrap::getMaxHitPoints() const {
	return(this->_maxHitPoints);
}
unsigned int	ScavTrap::getEnergyPoints() const {
	return(this->_energyPoints);
}
unsigned int	ScavTrap::getMaxEnergyPoints() const {
	return(this->_maxEnergyPoints);
}
unsigned int	ScavTrap::getLevel() const {
	return(this->_level);
}
std::string		ScavTrap::getName() const {
	return(this->_name);
}
unsigned int	ScavTrap::getMeleeAttackDamage() const {
	return(this->_meleeAttackDamage);
}
unsigned int	ScavTrap::getRangedAttackDamage() const {
	return(this->_rangedAttackDamage);
}
unsigned int	ScavTrap::getArmorDamageReduction() const {
	return(this->_armorDamageReduction);
}

unsigned int	ScavTrap::setHitPoints(unsigned int set){
	if (set > this->getMaxHitPoints())
		set = this->getMaxHitPoints();
	this->_hitPoints = set;
	return (set);
}
void	ScavTrap::setMaxHitPoints(unsigned int set){
	this->_maxHitPoints = set;
}
unsigned int	ScavTrap::setEnergyPoints(unsigned int set){
	if (set > this->getMaxEnergyPoints())
		set = this->getMaxEnergyPoints();
	this->_energyPoints = set;
	return (set);
}

void	ScavTrap::setMaxEnergyPoints(unsigned int set){
	this->_maxEnergyPoints = set;
}
void	ScavTrap::setLevel(unsigned int set){
	this->_level = set;
}
void	ScavTrap::setName(std::string set){
	this->_name = set;
}
void	ScavTrap::setMeleeAttackDamage(unsigned int set){
	this->_meleeAttackDamage = set;
}
void	ScavTrap::setRangedAttackDamage(unsigned int set){
	this->_rangedAttackDamage = set;
}
void	ScavTrap::setArmorDamageReduction(unsigned int set){
	this->_armorDamageReduction = set;
}

void		ScavTrap::rangedAttack(std::string const & target){
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

void		ScavTrap::meleeAttack(std::string const & target){
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " melee style, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

void		ScavTrap::takeDamage(unsigned int amount){
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
	std::cout << "ScavTrap " << this->_name << " took ";
	std::cout << amount << " points of damage !" << std::endl;
};

void		ScavTrap::beRepaired(unsigned int amount){
	unsigned int oldHitPoints = this->getHitPoints();
	unsigned int newHitPoints = this->setHitPoints(oldHitPoints + amount);
	std::cout << "ScavTrap " << this->_name << " was repaired ";
	std::cout << newHitPoints - oldHitPoints;
	std::cout << " points of HP!" << std::endl;
};

void		ScavTrap::challengeNewcomer(std::string const & target) {
	std::string funnyChallenge[] = {
		"Poop on you", "genital punch", "pillow fight", "sensual carress", 
		"STDS"
	};
	std::cout << "ScavTrap " << this->_name << " challenges " << target;
	std::cout << " to the " << funnyChallenge[rand() % 5];
	std::cout << " challenge! " << std::endl;
}