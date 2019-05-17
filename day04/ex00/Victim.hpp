/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 21:28:11 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define  VICTIM_HPP
# include <string>
# include <iostream>

class Victim {
	private:
		std::string _name;
		Victim(void);
	protected:
		void setName(std::string const & set);
	public:
		Victim(std::string name);
		Victim(Victim const & src);
		virtual ~Victim(void);

		Victim &		operator=(Victim const & rhs);

		std::string const & getName(void) const;

		virtual void getPolymorphed(void) const;

};

std::ostream &	operator<<(std::ostream & o, Victim const & rhs);
#endif
