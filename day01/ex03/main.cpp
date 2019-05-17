/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:29:50 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 21:48:18 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

int		main(void) {
	srand(time(NULL));
	ZombieHorde *wave1 = new ZombieHorde(10);
	ZombieHorde *wave2 = new ZombieHorde(20);
	wave1->announce();

	std::cout << std::endl <<  "grenade goes off" << std::endl <<std::endl;

	delete wave1;

	wave2->announce();
	std::cout << std::endl <<  "Nuclean bomb goes off" << std::endl <<std::endl;
	delete wave2;
	
	return 0;
}