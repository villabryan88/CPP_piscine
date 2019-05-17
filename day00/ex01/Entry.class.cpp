/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:08:33 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:22:09 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Entry.class.hpp"

void Entry::setInfo(int i, std::string set) {
	this->_info[i] = set;
}

const std::string Entry::keys[] = {"first name", "last name", "nickname", "login",
					"address", "email address", "phone number",
					"birthday date", "favorite meal", "underwear color",
					"darkest secret"};

std::string Entry::getInfo(int i) {
	return (this->_info[i]);
}