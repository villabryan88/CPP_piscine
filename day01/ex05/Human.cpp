/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 22:53:16 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string		Human::identify(void) const {
	return(this->_brain.identify());
}

Human::~Human(void) {
	std::cout << this->identify() << "\'s human has died" << std::endl;
}

const Brain&	Human::getBrain(void) const {
	return (this->_brain);
}
