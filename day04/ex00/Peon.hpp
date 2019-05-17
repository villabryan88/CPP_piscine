/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 21:27:54 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define  PEON_HPP
# include "Victim.hpp"
# include <string>
# include <iostream>

class Peon : public Victim{
	private:
		Peon(void);
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		virtual ~Peon(void);

		Peon &		operator=(Peon const & rhs);

		virtual void getPolymorphed(void) const;
};

#endif
