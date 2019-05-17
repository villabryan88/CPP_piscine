/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 22:19:36 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Span::Span(void) {};

Span::Span(unsigned int n): _size(n), _count(0) {};

Span::Span(Span const & src){
	*this = src;
};
Span::~Span(void) {};

Span const &	Span::operator=(Span const & rhs){
	_size = rhs._size;
	_count = rhs._count;
	_mset = rhs._mset;
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void	Span::addNumber(int n){
	if (_count >= _size)
		throw(std::length_error("You are trying to exceed length of Span\n"));
	_mset.insert(n);
	_count++;
}

unsigned int		Span::shortestSpan(void){
	unsigned int	minSpan = 4294967295;
	long long		span;
	std::multiset<int>::iterator it;
	std::multiset<int>::iterator next;

	if (_count <= 1)
		throw(std::length_error("Span is not long enough to calculate Span\n"));
	for(it = _mset.begin(); it != --_mset.end(); it++)
	{
		next = it;
		next++;
		span = *it - *next;
		if (span < 0)
			span = span * -1;
		if (span < minSpan)
			minSpan = span;		
	}
	return (minSpan);
}

unsigned int		Span::longestSpan(void){
	if (_count <= 1)
		throw(std::length_error("Span is not long enough to calculate Span\n"));

	return (*_mset.rbegin() - *_mset.begin());
}

