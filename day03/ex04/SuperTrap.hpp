/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 16:42:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define  SUPERTRAP_HPP
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>
# include <iostream>


class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);

		SuperTrap &		operator=(SuperTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
};

#endif
