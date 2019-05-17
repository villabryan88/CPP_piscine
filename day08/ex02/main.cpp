/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 20:44:57 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 21:35:35 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>


int main()
{
    MutantStack<int> mstack;


    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl; //expect 17 (17 5)

    mstack.pop();

    std::cout << mstack.size() << std::endl; //expect 1  (5)

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin(); // >5 3 5 737 0
    MutantStack<int>::iterator ite = mstack.end(); // 5 3 5 737 >0

    ++it;
    --it;

    while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}