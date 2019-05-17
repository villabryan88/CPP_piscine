/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cloud.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/05 20:46:22 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLOUD_HPP
# define  CLOUD_HPP

#include "AEntity.class.hpp"
#include <ncurses.h>

class Cloud : public AEntity{
	private:
		Cloud(void);
		Cloud(Cloud const & src);
	public:
		Cloud(int y, int x);
		~Cloud(void);

		Cloud &		operator=(Cloud const & rhs);

		virtual int update(int limit);

};

#endif
