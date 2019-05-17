/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 23:18:28 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/09 13:06:10 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T, typename F>
void    iter(T arr, long size, F func){
    for(long i = 0; i < size; i++)
        func(arr[i]);
}


template <typename T>
void    add_one(T & a){
    a++;
}

template <typename T>
void    print_array(T & n){
    std::cout << n << " ";
}

int     main(void)
{
    int     arr[] = {1, 2, 3};

    iter(arr, sizeof(arr)/sizeof(*arr), add_one<int>);
    iter(arr, sizeof(arr)/sizeof(*arr), print_array<int>); 
    std::cout << std::endl;

    char    arr1[] = "what's up yo!";
    iter(arr1, sizeof(arr1)/sizeof(*arr1), add_one<char>);
    iter(arr1, sizeof(arr1)/sizeof(*arr1), print_array<char>); 
    std::cout << std::endl;

    float    arr2[] = {1.2, 3.1, 4.7};
    iter(arr2, sizeof(arr2)/sizeof(*arr2), add_one<float>);
    iter(arr2, sizeof(arr2)/sizeof(*arr2), print_array<float>); 
    std::cout << std::endl; 

    return (0);
}