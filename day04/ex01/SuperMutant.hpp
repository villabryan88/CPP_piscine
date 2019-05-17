/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 23:13:45 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define  SUPERMUTANT_HPP
# include "Enemy.hpp"
# include <string>
# include <iostream>

class SuperMutant : public Enemy{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		virtual ~SuperMutant(void);

		SuperMutant &		operator=(SuperMutant const & rhs);

		virtual void takeDamage(int);
};

#endif
