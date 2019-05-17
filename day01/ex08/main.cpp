/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:55:47 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 14:01:56 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human bob;

	bob.action("meleeAttack", "John");
	bob.action("rangedAttack", "Bryan");
	bob.action("intimidatingShout", "James");
	bob.action("no", "no");
	return 0;
}