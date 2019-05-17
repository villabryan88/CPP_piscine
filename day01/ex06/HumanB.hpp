/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 01:45:25 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define  HUMANB_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		
		void	setWeapon(Weapon &weapon);
		void 	attack(void) const;
	
};

#endif
