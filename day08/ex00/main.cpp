/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 22:05:11 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 14:26:47 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <set>


template <typename T>
void	test(T & con, int n)
{
	typename T::iterator loc= easyfind(con, n);
	
	if (loc != con.end())
		std::cout << *loc << std::endl;
	else
		std::cout << "Not found" << std::endl;
}

int     main(void)
{
	std::list<int>  		lst1;
	std::deque<int>			deq1;
	std::vector<int>		vec1;
	std::set<int>			set1;


	for(int i = 0; i < 10; i++)
	{
		lst1.push_back(i);
		deq1.push_back(i);
		vec1.push_back(i);
		set1.insert(i);
	}

	test(lst1, 2);
	test(lst1, 12);
	test(deq1, 5);
	test(deq1, -1);
	test(vec1, 2);
	test(vec1, 1000);
	test(set1, 4);
	test(set1, 27);

	return 0;
}