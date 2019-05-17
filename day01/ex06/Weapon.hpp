/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 01:25:28 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define  WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);

		std::string const	getType(void) const;
		void				setType(std::string type);
};

#endif
