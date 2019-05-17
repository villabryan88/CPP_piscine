/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 01:34:38 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define  HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		
		void attack(void) const;

};

#endif
