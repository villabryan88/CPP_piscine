/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:48:29 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/08 14:35:02 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

Base * generate(void){
    Base    *ret;
    int     type = rand() % 3;

    if (type == 0)
        ret = new A();
    else if (type == 1)
        ret = new B();
    else
        ret = new C();
    
    return (ret);
}

void identify_from_pointer(Base * p){
    std::string type = "";
    
    if (dynamic_cast<A*>(p))
        type = "A";
    if (dynamic_cast<B*>(p))
        type = "B";
    if (dynamic_cast<C*>(p))
        type = "C";
    
    std::cout << type << std::endl;
}

void identify_from_reference(Base & p){
    std::string type = "";
    
    if (dynamic_cast<A*>(&p))
        type = "A";
    if (dynamic_cast<B*>(&p))
        type = "B";
    if (dynamic_cast<C*>(&p))
        type = "C";
    
    std::cout << type << std::endl;
}

int main(void) {
    srand(time(NULL));
    Base *p = generate();
    Base *a = new A();
    Base *b = new B();
    Base *c = new C();

    identify_from_pointer(a);
    identify_from_reference(*a);
    identify_from_pointer(b);
    identify_from_reference(*b);
    identify_from_pointer(c);
    identify_from_reference(*c);
    identify_from_pointer(p);
    identify_from_reference(*p);


    delete p;
    delete a;
    delete b;
    delete c;
    return 0;
}