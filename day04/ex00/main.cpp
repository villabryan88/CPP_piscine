/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:17:35 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 18:57:37 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <iostream>

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Victim copyjim(jim);
	Peon joe("Joe");
	Peon copyjoe(joe);
	Victim* ben = new Peon("ben");
	std::cout << robert << jim << joe << *ben;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(copyjim);
	robert.polymorph(copyjoe);
	robert.polymorph(*ben);



	joe = *(Peon*)ben;
	robert.polymorph(joe);
	return 0;
}