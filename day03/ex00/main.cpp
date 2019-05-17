/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:38:33 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/02 22:11:29 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

int		main()
{
	FragTrap jim = FragTrap("jim");

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
	return 0;
}