/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTime.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:51:44 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 15:11:08 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateTime.hpp"

DateTime::DateTime( void ) {
    std::time_t t = std::time(0);
    _dateTime = ctime(&t);   
}

DateTime::~DateTime( void ) {
   return ; 
}

DateTime::DateTime( DateTime const & rhs ) {
    *this = rhs;
}

DateTime & DateTime::operator=( DateTime const & rhs ) {
    this->_dateTime = rhs._dateTime;
    return *this;
}

std::string     DateTime::getDateTime( void ) const {
    return this->_dateTime;
}