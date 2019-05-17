/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:33:05 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:43:18 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Pony {

	private:
		std::string _name;

	public:
		Pony(std::string name);
		~Pony(void);		


		void	makeNoise(void) const;
		void	gallop(void) const;
		void	kickInAir(void) const;


};