/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 19:19:09 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_point = 8;

Fixed::Fixed(void) {
	this->_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
};

Fixed::Fixed(int const nb){
	std::cout << "Int constructor called" << std::endl;
	this->_val = nb * (1 << this->_point);
}

Fixed::Fixed(float const nb){
	std::cout << "Float constructor called" << std::endl;
	this->_val= round(nb * (1 << this->_point));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
};


Fixed &		Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
};

int			Fixed::getRawBits(void) const{
	return(this->_val);
}
void		Fixed::setRawBits(int const raw){
	this->_val = raw;
}

float		Fixed::toFloat(void) const {
	float	conv = 1.0 * this->_val / (1 << this->_point);

	return (conv);
}

int			Fixed::toInt(void) const {
	return (this->_val / (1 << this->_point));
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}