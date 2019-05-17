/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 16:40:42 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define  FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &		operator=(FragTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		vaulthunter_dot_exe(std::string const & target);
};

#endif
