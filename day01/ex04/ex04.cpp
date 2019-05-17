/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:55:24 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 22:00:25 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *point_str = &str;
	std::string &ref_str = str;

	std::cout << *point_str << std::endl << ref_str << std::endl;

	return 0;	
}