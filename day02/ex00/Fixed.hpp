/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 16:54:43 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define  FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int					_val;
		static int const	_frac;
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &		operator=( Fixed const & rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);

};

#endif
