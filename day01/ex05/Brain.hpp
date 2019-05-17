/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 23:07:43 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define  BRAIN_HPP
# include <iostream>
# include <string>

class Brain {
	private:
		int		_iq;
	public:
		Brain(void);
		~Brain(void);
		void		stateIq(void) const;
		std::string	identify(void) const;
};

#endif
