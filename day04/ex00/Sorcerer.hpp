/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/03 18:09:44 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define  SORCERER_HPP
# include "Victim.hpp"
# include <string>
# include <iostream>

class Sorcerer {
	private:
		std::string _name;
		std::string _title;
		Sorcerer(void);
	protected:
		void setName(std::string const & set);
		void setTitle(std::string const & set);
	public:
		Sorcerer(std::string const & name, std::string const & title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		Sorcerer &		operator=(Sorcerer const & rhs);

		std::string const & getName(void) const;
		std::string const & getTitle(void) const;
		void polymorph(Victim const &) const;
};

std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer);

#endif
