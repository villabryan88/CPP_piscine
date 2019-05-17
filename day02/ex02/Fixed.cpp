/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 20:11:53 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_point = 8;

Fixed::Fixed(void) {
	this->_val = 0;
}

Fixed::Fixed(Fixed const & src){
	*this = src;
};

Fixed::Fixed(int const nb){
	this->_val = nb * (1 << this->_point);
}

Fixed::Fixed(float const nb){
	this->_val= round(nb * (1 << this->_point));
}

Fixed::~Fixed(void) {
};


Fixed &		Fixed::operator=(Fixed const & rhs){
	this->_val = rhs.getRawBits();
	return (*this);
};


bool		Fixed::operator>(Fixed const & rhs){
	return (this->_val > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const & rhs){
	return (this->_val < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const & rhs){
	return (this->_val >= rhs.getRawBits());
}

bool		Fixed::operator<=(Fixed const & rhs){
	return (this->_val <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const & rhs){
	return (this->_val == rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const & rhs){
	return (this->_val != rhs.getRawBits());
}

Fixed 		Fixed::operator+(Fixed const & rhs){
	return Fixed(this->toFloat() + rhs.toFloat());
};

Fixed 		Fixed::operator-(Fixed const & rhs){
	return Fixed(this->toFloat() - rhs.toFloat());
};

Fixed 		Fixed::operator*(Fixed const & rhs){
	return Fixed(this->toFloat() * rhs.toFloat());
};

Fixed 		Fixed::operator/(Fixed const & rhs){
	return Fixed(this->toFloat() / rhs.toFloat());
};


Fixed &		Fixed::operator++() {
	this->_val++;
	return (*this);
}

Fixed &		Fixed::operator--() {
	this->_val--;
	return (*this);
}

Fixed 		Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_val++;
	return (tmp);
}

Fixed		Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_val--;
	return (tmp);
}

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

Fixed &			Fixed::min(Fixed & a, Fixed & b) {
	if (a < b)
		return (a);
	return (b);
}
Fixed const &	Fixed::min(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);	
}

Fixed &			Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	return (b);	
}
Fixed const &	Fixed::max(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);	
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}