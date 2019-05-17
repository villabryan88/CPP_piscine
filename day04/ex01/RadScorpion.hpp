/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 23:28:15 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define  RADSCORPION_HPP
# include "Enemy.hpp"
# include <string>
# include <iostream>

class RadScorpion : public Enemy{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		virtual ~RadScorpion(void);

		RadScorpion &		operator=(RadScorpion const & rhs);
};

#endif
