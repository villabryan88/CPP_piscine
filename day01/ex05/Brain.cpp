/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 23:05:19 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void) {
	this->_iq = 100;
};

Brain::~Brain(void) {
	
	std::cout << this->identify() << " the brain has died" << std::endl;
};

std::string Brain::identify(void) const {
	std::stringstream ss;

	ss << this;
	return(ss.str());
}

void	Brain::stateIq(void) const {
	std::cout << "My iq is " << this->_iq << std::endl;
}