/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:23:14 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:24:37 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include "Entry.class.hpp"
#include <string>
#include <iostream>

class Phonebook
{
	private:
		Entry	_entries[8];
		int		_nbEntries;
	public:
		Phonebook(void);
		void	newEntry();
		void	displayEntries();
		void	displayEntry(int i);
};

#endif