/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 16:41:07 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define  NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>


class NinjaTrap : virtual public ClapTrap{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap &		operator=(NinjaTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		ninjaShoebox(NinjaTrap const & target);
		void		ninjaShoebox(FragTrap const & target);
		void		ninjaShoebox(ScavTrap const & target);




};

#endif
