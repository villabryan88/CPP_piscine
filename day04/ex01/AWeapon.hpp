/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 21:19:47 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define  AWEAPON_HPP
# include <string>

class AWeapon {
	private:
		AWeapon(void);
		std::string _name;
		int			_damage;
		int			_aPCost;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();
		AWeapon &		operator=(AWeapon const & rhs);


		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		
		virtual void attack() const = 0;
	


};

#endif
