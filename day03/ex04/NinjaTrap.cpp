/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 19:28:35 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap() {
	std::cout << "NinjaTrap with no name: ";
	std::cout << "NinjaTorappu desu!  Ore no ninjitsu ni kando shiro!";
	std::cout << std::endl;	
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name) {
	this->setMaxHitPoints(60);
	this->setHitPoints(60);
	this->setMaxEnergyPoints(120);
	this->setEnergyPoints(120);
	this->setLevel(1);
	this->setName(name);
	this->setMeleeAttackDamage(60);
	this->setRangedAttackDamage(5);
	this->setArmorDamageReduction(0);

	std::cout << "NinjaTrap " << name << ": ";
	std::cout << "NinjaTorappu desu!  Ore no ninjitsu ni kando shiro!";
	std::cout << std::endl;
};

NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src.getName()){
	*this = src;

	std::cout << "NinjaTrap " << this->getName() << ": ";
	std::cout << "NinjaTorappu desu!  Ore no ninjitsu ni kando shiro!";
	std::cout << std::endl;
};

NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap " << this->getName() << ": ";
	std::cout << "meiwaku ni natte, shitsureishimashita.  shinasete itadakimasu!!" << std::endl;
};

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rhs){
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

void		NinjaTrap::rangedAttack(std::string const & target){
	ClapTrap::rangedAttack("NinjaTrap ", target);
};

void		NinjaTrap::meleeAttack(std::string const & target){
	ClapTrap::meleeAttack("NinjaTrap ", target);
};

void		NinjaTrap::takeDamage(unsigned int amount){
	amount = ClapTrap::takeDamage(amount);
	
	std::cout << "NinjaTrap " << this->getName() << " took ";
	std::cout << amount << " points of damage !" << std::endl;
};

void		NinjaTrap::beRepaired(unsigned int amount){
	std::cout << "NinjaTrap " << this->getName() << " was repaired ";
	std::cout << ::ClapTrap::beRepaired(amount);
	std::cout << " points of HP!" << std::endl;
};

void		NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	std::cout << target.getName() << ", ashi kirei dana~.";
	std::cout << "  mira- attakku! kutsubako!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap const & target) {
	std::cout << target.getName() << ", bakayaro! hayo kaere!";
	std::cout << " kutsubako ni bakemasu!" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	std::cout << target.getName() << ", charenji yamero baka! ";
	std::cout << " kutsubako no charenji doudai? " << std::endl;
}