/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 21:02:58 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define  LOGGER_HPP
#include <string>
#include <fstream>
#include <iostream>

class Logger {
	private:
		std::string _file;

		void		logToConsole(std::string const & str) const;
		void		logToFile(std::string const & str) const;
		std::string	makeLogEntry(std::string const & msg) const;

	public:
		Logger(std::string file);

		void	log(std::string const & dest, std::string const & message);
};

#endif
