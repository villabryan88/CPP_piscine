/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:53:55 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 22:22:10 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    Span sp = Span(5);
    std::vector<int> vec;

    for(int i = 0; i < 100; i++)
        vec.push_back(i);

    
    try{
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try{
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    } 

    sp.addNumber(5);

    try{
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try{
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    } 

    sp.addNumber(3);

    try{
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    }
    try{
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what();
    } 
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    Span huge(10000);
    for(int i = 0; i < 10000; i++)
    {
        huge.addNumber(i*2);
    }
    std::cout << huge.shortestSpan() << std::endl;
    std::cout << huge.longestSpan() << std::endl; 


    Span test2(3);
    test2.addNumber(-2147483648);
    test2.addNumber(2147483647);
    std::cout << test2.shortestSpan() << std::endl;
    std::cout << test2.longestSpan() << std::endl; 

    try {
        test2.addNumber(2147483647);
        test2.addNumber(2);
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }
    std::cout << test2.shortestSpan() << std::endl;
    std::cout << test2.longestSpan() << std::endl; 

    Span fromvec(100);
    fromvec.addFromIt(vec.begin(), vec.end());
    std::cout << fromvec.shortestSpan() << std::endl;
    std::cout << fromvec.longestSpan() << std::endl;

    try{
    test2.addFromIt(vec.begin(), vec.end());
    std::cout << fromvec.shortestSpan() << std::endl;
    std::cout << fromvec.longestSpan() << std::endl; 
    }
    catch(std::exception & e)
    {
        std::cout << e.what();
    }

}