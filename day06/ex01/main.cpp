/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:00:42 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/08 12:40:43 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>

struct Data 
{ 
    std::string s1;
    int n; 
    std::string s2;
};


void    *serialize(void) {
    unsigned char *ser = new unsigned char[20];
    char alphanum [] = "abcdefghijklmnopqrstuvwxyz0123456789";
    for(int i = 0; i < 8; i++)
        ser[i] = alphanum[rand() % 36];
    for(int i = 8; i < 12; i++)
        ser[i] = rand() % 255;
    for(int i = 12; i < 20; i++)
        ser[i] = alphanum[rand() % 36];

    // std::cout << ser[1] << std::endl;

    return (ser);
}

Data * deserialize (void * raw){
    char *string = reinterpret_cast<char*>(raw);
    int  *num = reinterpret_cast<int*>(string + 8);
    Data *deser = new Data();
    
    deser->n = *num;
    deser->s1.assign(string, 8);
    deser->s2.assign(string + 12, 8);
    return (deser);
}

int main(void)
{
    srand(time(NULL));
    void *ser = serialize();
    Data *deser = deserialize(ser);    

    std::cout << "s1: " << deser->s1 << std::endl
              << "n: " << deser->n << std::endl
              << "s2: " << deser->s2 << std::endl;

    return 0;
}