/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 22:34:38 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/08 23:02:12 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const & min(T & a, T & b){
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T const & max(T & a, T & b){
    if (a > b)
        return (a);
    return (b);
}

int main( void ) {
    int a(2);
    int b(3);
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    double e = 123.456;
    double f = 789.012;
    ::swap(e,f);
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;

    bool g = 1;
    bool h = 0;
    ::swap(g, h);
    std::cout << "g = " << g << ", h = " << h << std::endl;
    std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
    std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl; 
    return 0;
}