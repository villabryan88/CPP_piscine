/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:21:05 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/29 16:25:59 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	loudify(int ac, char **av)
{
	int		i = 0;
	int		j;
	
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		loudify(ac, av);
		i = 1;
		while (i < ac)
			std::cout << av[i++];
	}
	std::cout << std::endl;
	return 0;
}
