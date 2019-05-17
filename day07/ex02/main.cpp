/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:38:42 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/09 13:20:25 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T, typename F>
void    iter(T arr, long size, F func){
    for(long i = 0; i < size; i++)
        func(arr[i]);
}

template <typename T>
void    print_array(T & n){
    std::cout << n << " ";
}

int main(void) {
    Array<int> arr1(3);
    try{
        arr1[0] = 1;
        arr1[1] = 2;
        arr1[2] = 3;
        arr1[3] = 4;
        arr1[4] = 5;
        std::cout << "doesn't get this far" << std::endl;
    }
    catch(std::exception & e){
        std::cout << "you did something bad" << std::endl;
    }
    try{
        std::cout << "arr1: ";
        iter(arr1, 5, print_array<int>);
    }
    catch(std::exception & e){
        std::cout << std::endl << "you did something bad" << std::endl;
    } 

    Array<int> arr2(arr1);
    try{
        std::cout << "arr2: ";
        iter(arr2, 3, print_array<int>);
    }
    catch(std::exception & e){
        std::cout << std::endl << "you did something bad" << std::endl;
    } 

    Array<float> arr3(3);
    arr3[0] = 1.1;
    arr3[1] = 2.2;
    arr3[2] = 3.3;

    try{
        std::cout << std::endl << "arr3: ";
        iter(arr3, 3, print_array<float>);
    }
    catch(std::exception & e){
        std::cout << std::endl << "you did something bad" << std::endl;
    } 
    std::cout << std::endl;
    return 0;
}