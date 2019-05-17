/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 21:26:12 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define  ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie {
	private:
		std::string _type;
		std::string _name;
	public:
		Zombie(void);	
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void) const;
};

#endif
