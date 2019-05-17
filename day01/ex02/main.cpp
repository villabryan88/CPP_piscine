/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:43:53 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 20:34:10 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <ctime>

int		main()
{
	ZombieEvent dod;
	ZombieEvent dod2;
	Zombie		*star1;
	Zombie		*star2;
	
	srand(time(NULL));
	dod.setZombieType("Dancer");
	dod.randomChump();
	dod.randomChump();
	star1 = dod.newZombie("THE MAN");
	star1->announce();
	dod2.setZombieType("mallrat");
	star2 = dod2.newZombie("WILL SMITH");
	star2->announce();
	dod2.randomChump();
	dod2.randomChump();

	delete star1;
	delete star2;
	return 0;
}