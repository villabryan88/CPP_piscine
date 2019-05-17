/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:15:32 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FR4G-TP with no name: ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;	
};

FragTrap::FragTrap(std::string name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FR4G-TP " << name << ": ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;
};
FragTrap::FragTrap(FragTrap const & src){
	*this = src;
	std::cout << "FR4G-TP " << this->getName() << ": ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;
};
FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->_name << ": ";
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;	
};

FragTrap &		FragTrap::operator=(FragTrap const & rhs){
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

unsigned int	FragTrap::getHitPoints() const {
	return(this->_hitPoints);
}
unsigned int	FragTrap::getMaxHitPoints() const {
	return(this->_maxHitPoints);
}
unsigned int	FragTrap::getEnergyPoints() const {
	return(this->_energyPoints);
}
unsigned int	FragTrap::getMaxEnergyPoints() const {
	return(this->_maxEnergyPoints);
}
unsigned int	FragTrap::getLevel() const {
	return(this->_level);
}
std::string		FragTrap::getName() const {
	return(this->_name);
}
unsigned int	FragTrap::getMeleeAttackDamage() const {
	return(this->_meleeAttackDamage);
}
unsigned int	FragTrap::getRangedAttackDamage() const {
	return(this->_rangedAttackDamage);
}
unsigned int	FragTrap::getArmorDamageReduction() const {
	return(this->_armorDamageReduction);
}

unsigned int	FragTrap::setHitPoints(unsigned int set){
	if (set > this->getMaxHitPoints())
		set = this->getMaxHitPoints();
	this->_hitPoints = set;
	return (set);
}
void	FragTrap::setMaxHitPoints(unsigned int set){
	this->_maxHitPoints = set;
}
unsigned int	FragTrap::setEnergyPoints(unsigned int set){
	if (set > this->getMaxEnergyPoints())
		set = this->getMaxEnergyPoints();
	this->_energyPoints = set;
	return (set);
}

void	FragTrap::setMaxEnergyPoints(unsigned int set){
	this->_maxEnergyPoints = set;
}
void	FragTrap::setLevel(unsigned int set){
	this->_level = set;
}
void	FragTrap::setName(std::string set){
	this->_name = set;
}
void	FragTrap::setMeleeAttackDamage(unsigned int set){
	this->_meleeAttackDamage = set;
}
void	FragTrap::setRangedAttackDamage(unsigned int set){
	this->_rangedAttackDamage = set;
}
void	FragTrap::setArmorDamageReduction(unsigned int set){
	this->_armorDamageReduction = set;
}

void		FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

void		FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " melee style, causing " << this->_meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
};

void		FragTrap::takeDamage(unsigned int amount){
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
	std::cout << "FR4G-TP " << this->_name << " took ";
	std::cout << amount << " points of damage !" << std::endl;
};

void		FragTrap::beRepaired(unsigned int amount){
	unsigned int oldHitPoints = this->getHitPoints();
	unsigned int newHitPoints = this->setHitPoints(oldHitPoints + amount);
	std::cout << "FR4G-TP " << this->_name << " was repaired ";
	std::cout << newHitPoints - oldHitPoints;
	std::cout << " points of HP!" << std::endl;
};

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string funnyAttacks[] = {
		"Pee on you", "genital slap", "tickle fight", "sensual bite", 
		"AIDS"
	};
	if (this->getEnergyPoints() < 25)
	{
		std::cout << this->_name << " is out of energy" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 25);
	std::cout << this->_name << " used " << funnyAttacks[rand() % 5];
	std::cout << " attack on " << target;
	std::cout << " It was highly effective!!" << std::endl;
}