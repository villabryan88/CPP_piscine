/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 17:06:12 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_frac = 8;

Fixed::Fixed(void) {
	this->_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	this->_val = src.getRawBits();
};

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
};

Fixed &		Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
};

int			Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_val);
}
void		Fixed::setRawBits(int const raw){
	this->_val = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

