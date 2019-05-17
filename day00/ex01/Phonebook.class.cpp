/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:07:41 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:22:46 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdio>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) {
	this->_nbEntries = 0;
}

void Phonebook::newEntry() {
	std::string		tmp;

	if (this->_nbEntries >= 8)
	{
		std::cout << "Sorry, Phonebook is full!" << std::endl;
		return ;
	}
	for(int i = 0; i < 11; i++)
	{
		std::cout << "What is the " << Entry::keys[i] << "?" << std::endl;
		std::getline(std::cin, tmp);
		this->_entries[_nbEntries].setInfo(i, tmp);
	}
	this->_nbEntries++;
}

std::string format_entry(std::string s){
	int		len;
	int		pos;
	std::string tmp;

	len = s.length();
	pos = len >= 10 ? 0 : 10 - len;
	tmp = "          ";
	tmp.replace(pos, 10 - pos, s, 0, 10);
	if (len > 10)
	tmp.replace(9, 1, ".");
	return (tmp);
}

void Phonebook::displayEntries()
{
	std::string		tmp;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	std::cout << "``````````|``````````|``````````|``````````" << std::endl;
	for(int i = 0; i < this->_nbEntries; i++)
	{
		std::cout << format_entry(std::to_string(i)) << "|";
		std::cout << format_entry(this->_entries[i].getInfo(0)) << "|";
		std::cout << format_entry(this->_entries[i].getInfo(1)) << "|";
		std::cout << format_entry(this->_entries[i].getInfo(2)) << std::endl;
	}
}

void Phonebook::displayEntry(int i)
{
	if (i > this->_nbEntries - 1 || i < 0)
	{
		std::cout << "Index doesn't exist" << std::endl;
		return ;
	}
	for(int j= 0; j < 11; j++)
		std::cout << Entry::keys[j] << " : " << this->_entries[i].getInfo(j) << std::endl;
}