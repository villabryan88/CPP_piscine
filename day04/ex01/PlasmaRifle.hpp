/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 21:29:24 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define  PLASMARIFLE_HPP
# include "AWeapon.hpp"
# include <string>
# include <iostream>

class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle(void);

		PlasmaRifle &		operator=(PlasmaRifle const & rhs);

		virtual void attack() const;

};

#endif
