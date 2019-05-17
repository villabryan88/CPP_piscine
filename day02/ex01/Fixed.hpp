/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 19:17:08 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_val;
		static int const	_point;
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const nb);
		Fixed(float const nb);
		~Fixed(void);

		Fixed &		operator=( Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);
#endif
