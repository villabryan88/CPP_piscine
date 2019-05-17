/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 22:20:00 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define  SPAN_HPP
# include <set>
# include <stdexcept>
# include <iterator>

class Span {
	private:
		unsigned int	_size;
		unsigned int	_count;
	
		std::multiset<int>  _mset;

		Span(void);

	public:
		Span(Span const & src);
		Span(unsigned int n);

		Span const &	operator=(Span const & rhs);

		~Span(void);

		void			addNumber(int n);

		template <class InputIterator>
		void			addFromIt(InputIterator first, InputIterator last){
			while(first != last)
			{
				addNumber(*first);
				first++;
			}
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

};

#endif
