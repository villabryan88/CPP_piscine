/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 22:53:46 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define  HUMAN_HPP
# include "Brain.hpp"
# include <string>

class Human {
	private:
		Brain const _brain;
	public:
		std::string identify(void) const;
		const Brain&	getBrain(void) const;

		~Human(void);
};

#endif
