/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 21:38:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define  POWERFIST_HPP
# include "AWeapon.hpp"
# include <string>
# include <iostream>

class PowerFist: public AWeapon {
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist(void);

		PowerFist &		operator=(PowerFist const & rhs);

		virtual void attack() const;

};

#endif
