/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:20:21 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap(), FragTrap(), NinjaTrap() {
	std::cout << "SuperTrap with no name: ";
	std::cout << "Get ready to SHINU!";
	std::cout << std::endl;	
};

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->setMaxHitPoints(100);
	this->setHitPoints(100);
	this->setMaxEnergyPoints(120);
	this->setEnergyPoints(120);
	this->setLevel(1);
	this->setName(name);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);

	std::cout << "SuperTrap " << name << ": ";
	std::cout << "Get ready to SHINU!";
	std::cout << std::endl;
};

SuperTrap::SuperTrap(SuperTrap const & src): 
ClapTrap(src.getName()), FragTrap(src.getName()), NinjaTrap(src.getName()) {
	*this = src;
	std::cout << "SuperTrap " << this->getName() << ": ";
	std::cout << "A pleasure to kick ass!!" << std::endl;
};

SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap " << this->getName() << ": ";
	std::cout << "A pleasure to kick ass!!" << std::endl;
};

SuperTrap &		SuperTrap::operator=(SuperTrap const & rhs){
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

void		SuperTrap::rangedAttack(std::string const & target){
	FragTrap::rangedAttack(target);
};

void		SuperTrap::meleeAttack(std::string const & target){
	NinjaTrap::meleeAttack(target);
};