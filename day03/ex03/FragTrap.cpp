/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:25:19 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "FR4G-TP with no name: ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;
};

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->setMaxHitPoints(100);
	this->setHitPoints(100);
	this->setMaxEnergyPoints(100);
	this->setEnergyPoints(100);
	this->setLevel(1);
	this->setName(name);
	this->setMeleeAttackDamage(30);
	this->setRangedAttackDamage(20);
	this->setArmorDamageReduction(5);
	std::cout << "FR4G-TP " << name << ": ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;
};
FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src.getName()){
	*this = src;
	std::cout << "FR4G-TP " << this->getName() << ": ";
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. ";
	std::cout << "Directive three: Dance!" << std::endl;
};
FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->getName() << ": ";
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;	
};

FragTrap &		FragTrap::operator=(FragTrap const & rhs){
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




void		FragTrap::rangedAttack(std::string const & target){
	ClapTrap::rangedAttack("FR4G-TP ", target);
};

void		FragTrap::meleeAttack(std::string const & target){
	ClapTrap::meleeAttack("FR4G-TP ", target);
};

void		FragTrap::takeDamage(unsigned int amount){
	amount = ClapTrap::takeDamage(amount);
	
	std::cout << "FR4G-TP " << this->getName() << " took ";
	std::cout << amount << " points of damage !" << std::endl;
};

void		FragTrap::beRepaired(unsigned int amount){
	std::cout << "FR4G-TP " << this->getName() << " was repaired ";
	std::cout << ::ClapTrap::beRepaired(amount);
	std::cout << " points of HP!" << std::endl;
};

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::string funnyAttacks[] = {
		"Pee on you", "genital slap", "tickle fight", "sensual bite", 
		"AIDS"
	};
	if (this->getEnergyPoints() < 25)
	{
		std::cout << this->getName() << " is out of energy" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 25);
	std::cout << this->getName() << " used " << funnyAttacks[rand() % 5];
	std::cout << " attack on " << target;
	std::cout << " It was highly effective!!" << std::endl;
}
