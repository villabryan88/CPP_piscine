/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 00:08:30 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/09 13:13:24 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
	private:
		T *_arr;
		unsigned int _size;
	public:
		Array<T>(void){
			*_arr = new T[0];
			this->_size = 0;
		}
		Array<T>(unsigned int n) { 
			this->_arr = new T[n];
			this->_size = n;
		}
		Array<T>(Array const & src){
			*this = src;
		}
		~Array<T>(){
			delete this->_arr;
		}
		
		T &         		operator[](unsigned int const i) const {
			if (i >= this->_size)
				throw(std::exception());
			return (this->_arr[i]);
		}

		Array<T> const & 	operator=(Array const & src) {
			this->_size = src.size();
			this->_arr = new T[src.size()];
			for(unsigned int i = 0; i < src.size(); i++)
				this->_arr[i] = src[i];
			return (*this);
		}

		unsigned int	size(void) const {
			return this->_size;
		}
};