/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:24:00 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "ScavTrap with no name: ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;	
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->setMaxHitPoints(100);
	this->setHitPoints(100);
	this->setMaxEnergyPoints(50);
	this->setEnergyPoints(50);
	this->setLevel(1);
	this->setName(name);
	this->setMeleeAttackDamage(20);
	this->setRangedAttackDamage(15);
	this->setArmorDamageReduction(3);
	std::cout << "ScavTrap" << name << ": ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src.getName()){
	*this = src;
	std::cout << "ScavTrap" << this->getName() << ": ";
	std::cout << "God is that you? Reporting to duty!" << std::endl;
};
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->getName() << ": ";
	std::cout << "Peace out brother!" << std::endl;
};

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs){
	this->setHitPoints(rhs.getHitPoints());
	this->setMaxHitPoints(rhs.getMaxHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
	this->setLevel(rhs.getLevel());
	this->setName(rhs.getName());
	this->setMeleeAttackDamage(rhs.getMeleeAttackDamage());
	this->setRangedAttackDamage(rhs.getRangedAttackDamage());
	this->setArmorDamageReduction(rhs.getArmorDamageReduction());

	return (*this);
};



void		ScavTrap::rangedAttack(std::string const & target){
	ClapTrap::rangedAttack("ScavTrap ", target);
};

void		ScavTrap::meleeAttack(std::string const & target){
	ClapTrap::meleeAttack("ScavTrap ", target);
};

void		ScavTrap::takeDamage(unsigned int amount){
	amount = ClapTrap::takeDamage(amount);
	
	std::cout << "ScavTrap " << this->getName() << " took ";
	std::cout << amount << " points of damage !" << std::endl;
};

void		ScavTrap::beRepaired(unsigned int amount){
	std::cout << "ScavTrap " << this->getName() << " was repaired ";
	std::cout << ::ClapTrap::beRepaired(amount);
	std::cout << " points of HP!" << std::endl;
};

void		ScavTrap::challengeNewcomer(std::string const & target) {
	std::string funnyChallenge[] = {
		"Poop on you", "genital punch", "pillow fight", "sensual carress", 
		"STDS"
	};
	std::cout << "ScavTrap " << this->getName() << " challenges " << target;
	std::cout << " to the " << funnyChallenge[rand() % 5];
	std::cout << " challenge! " << std::endl;
}