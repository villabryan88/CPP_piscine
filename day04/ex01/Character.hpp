/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/04 01:58:54 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define  CHARACTER_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	private:
		std::string	_name;
		int			_aP;
		AWeapon		*_weapon;

		Character(void);
	public:
		Character(std::string const & name);
		Character(Character const & src);
		~Character(void);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		std::string const & getName() const;
		int const &			getAP() const;
		AWeapon *			getWeapon() const;



		Character &		operator=(Character const & rhs);
};

std::ostream &	operator<<(std::ostream & o, Character const & rhs); 
#endif
