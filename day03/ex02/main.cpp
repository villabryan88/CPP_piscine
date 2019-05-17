/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:38:33 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/02 22:53:41 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int		main()
{
	FragTrap jim = FragTrap("jim");
	ScavTrap bob = ScavTrap("bob");

	srand(time(NULL));
	std::cout << "Hit points : " << jim.getHitPoints() << std::endl;
	std::cout << "Max hit points : " << jim.getMaxHitPoints() << std::endl;
	std::cout << "Energy points : " << jim.getEnergyPoints() << std::endl;
	std::cout << "Max energy points : " << jim.getMaxEnergyPoints() << std::endl;
	std::cout << "Level : " << jim.getLevel() << std::endl;
	std::cout << "Name : " << jim.getName() << std::endl;
	std::cout << "Melee attack damage : " << jim.getMeleeAttackDamage() << std::endl;
	std::cout << "Ranged attack damage : " << jim.getRangedAttackDamage() << std::endl;
	std::cout << "Armor damage reduction: " << jim.getArmorDamageReduction() << std::endl;
	
	jim.rangedAttack("you");
	jim.meleeAttack("you");
	jim.takeDamage(50);
	jim.takeDamage(100);
	jim.beRepaired(80);
	jim.beRepaired(30);
	jim.beRepaired(30);

	jim.vaulthunter_dot_exe("you");
	jim.vaulthunter_dot_exe("you");
	jim.vaulthunter_dot_exe("you");
	jim.vaulthunter_dot_exe("you");
	jim.vaulthunter_dot_exe("you");
	std::cout << std::endl << std::endl << "next is bob" << std::endl << std::endl;

	std::cout << "Hit points : " << bob.getHitPoints() << std::endl;
	std::cout << "Max hit points : " << bob.getMaxHitPoints() << std::endl;
	std::cout << "Energy points : " << bob.getEnergyPoints() << std::endl;
	std::cout << "Max energy points : " << bob.getMaxEnergyPoints() << std::endl;
	std::cout << "Level : " << bob.getLevel() << std::endl;
	std::cout << "Name : " << bob.getName() << std::endl;
	std::cout << "Melee attack damage : " << bob.getMeleeAttackDamage() << std::endl;
	std::cout << "Ranged attack damage : " << bob.getRangedAttackDamage() << std::endl;
	std::cout << "Armor damage reduction: " << bob.getArmorDamageReduction() << std::endl;
	
	bob.rangedAttack("you");
	bob.meleeAttack("you");
	bob.takeDamage(50);
	bob.takeDamage(100);
	bob.beRepaired(80);
	bob.beRepaired(30);
	bob.beRepaired(30);

	bob.challengeNewcomer("you");
	bob.challengeNewcomer("you");
	bob.challengeNewcomer("you");
	bob.challengeNewcomer("you");
	bob.challengeNewcomer("you");	
	return 0;
}