/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 18:08:28 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 17:23:57 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTRY_CLASS_HPP
# define ENTRY_CLASS_HPP
# include <string>

class Entry
{
	private:
		std::string			_info[11];


	public:
		void 						setInfo(int i, std::string set);
		std::string					getInfo(int i);
		static const std::string  	keys[];

};

#endif