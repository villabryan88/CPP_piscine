/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 16:34:42 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define  FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class FragTrap {
	private:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_meleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

		unsigned int	setHitPoints(unsigned int set);
		void			setMaxHitPoints(unsigned int set);
		unsigned int	setEnergyPoints(unsigned int set);
		void			setMaxEnergyPoints(unsigned int set);
		void			setLevel(unsigned int set);
		void			setName(std::string set);
		void			setMeleeAttackDamage(unsigned int set);
		void			setRangedAttackDamage(unsigned int set);
		void			setArmorDamageReduction(unsigned int set);
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

		unsigned int	getHitPoints() const;
		unsigned int	getMaxHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getMaxEnergyPoints() const;
		unsigned int	getLevel() const;
		std::string		getName() const;
		unsigned int	getMeleeAttackDamage() const;
		unsigned int	getRangedAttackDamage() const;
		unsigned int	getArmorDamageReduction() const;

};

#endif
