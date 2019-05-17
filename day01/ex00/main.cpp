/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:46:49 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 18:43:56 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony	*steve = new Pony("steve");

	(*steve).makeNoise();
	(*steve).gallop();
	(*steve).kickInAir();

	delete steve;
}

void	ponyOnTheStack(void)
{
	Pony	jack = Pony("jack");

	jack.makeNoise();
	jack.gallop();
	jack.kickInAir();	
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();	

	std::cout << "The program has not yet ended" << std::endl;
	return 0;
}