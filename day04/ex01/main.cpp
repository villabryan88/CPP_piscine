/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:46:21 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/04 01:56:58 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int		main(void)
{
	PlasmaRifle pr1;
	PlasmaRifle pr2(pr1);
	PowerFist pf1;
	PowerFist pf2(pf1);
	AWeapon *w1 = new PlasmaRifle();
	AWeapon *w2 = new PowerFist();
	RadScorpion scorp;
	SuperMutant mute;
	Enemy *e1= new RadScorpion();
	Enemy *e2= new SuperMutant();
	// AWeapon *tmp = new PlasmaRifle();

	pr1 = pr2;
	pf1 = pf2;

	std::cout << "name: " << pr1.getName() << std::endl;
	std::cout << "aPCost: " << pr1.getAPCost() << std::endl;
	std::cout << "damage: " << pr1.getDamage() << std::endl ;
	pr1.attack();
	std::cout << std::endl;

	std::cout << "name: " << pr2.getName() << std::endl;
	std::cout << "aPCost: " << pr2.getAPCost() << std::endl;
	std::cout << "damage: " << pr2.getDamage() << std::endl ;
	pr2.attack();
	std::cout << std::endl;

	std::cout << "name: " << pf1.getName() << std::endl;
	std::cout << "aPCost: " << pf1.getAPCost() << std::endl;
	std::cout << "damage: " << pf1.getDamage() << std::endl ;
	pf1.attack();
	std::cout << std::endl;

	std::cout << "name: " << w1->getName() << std::endl;
	std::cout << "aPCost: " << w1->getAPCost() << std::endl;
	std::cout << "damage: " << w1->getDamage() << std::endl ;
	w1->attack();
	std::cout << std::endl;

	std::cout << "name: " << w2->getName() << std::endl;
	std::cout << "aPCost: " << w2->getAPCost() << std::endl;
	std::cout << "damage: " << w2->getDamage() << std::endl ;
	w2->attack();
	std::cout << std::endl;
	
	*w1 = *w2;

	std::cout << "name: " << w1->getName() << std::endl;
	std::cout << "aPCost: " << w1->getAPCost() << std::endl;
	std::cout << "damage: " << w1->getDamage() << std::endl ;
	w1->attack();
	std::cout << std::endl;

	*e1 = *e2;


	std::cout << "test from subject " << std::endl << std::endl;

	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	return 0;
}