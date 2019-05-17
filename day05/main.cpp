/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 18:45:20 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/06 18:50:19 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

int		main(){

Bureaucrat john("John", 1);
Bureaucrat mary("Mary", 150);
try
{

	john.decGrade();
	john.incGrade();
	john.incGrade();

}
catch (std::exception & e)
{
	std::cout << e.what();
}

try
{
	mary.incGrade();
	mary.decGrade();
	mary.decGrade();
}
catch (std::exception & e)
{
	std::cout << e.what();
}

return 0;
}