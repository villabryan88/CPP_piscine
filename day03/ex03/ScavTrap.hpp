/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 16:39:40 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define  SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);	
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);

		ScavTrap &		operator=(ScavTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
		void		challengeNewcomer(std::string const & target);
};

#endif
