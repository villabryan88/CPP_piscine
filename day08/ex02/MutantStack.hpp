/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/10 21:36:24 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define  MUTANTSTACK_HPP
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	private:
	
	public:
		MutantStack(void){};
		MutantStack(MutantStack const & src){
			*this = src;
		};
		MutantStack const &		operator=(MutantStack const & rhs){
			std::stack<T>::operator=(rhs);
			return (*this);
		};
		virtual ~MutantStack(void){};

		typedef typename std::deque<T>::iterator 		iterator;
		typedef typename std::deque<T>::const_iterator	const_iterator;

		iterator		begin() {
			return(this->c.begin());
		};
		const_iterator	begin() const {
			return(this->c.begin());
		};
		iterator		end(){
			return(this->c.end());
		};
		const_iterator	end() const{
			return(this->c.end());
		};

};

#endif
