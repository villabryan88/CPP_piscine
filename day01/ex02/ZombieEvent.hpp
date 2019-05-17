/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 20:08:03 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define  ZOMBIEEVENT_HPP
# include <string>
# include "Zombie.hpp"
class ZombieEvent {
	private:
		std::string _zombieType;
	public:
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name) const;
		void	randomChump(void) const;
};

#endif
