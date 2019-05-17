/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 21:04:59 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string file) {
    this->_file = file;
};

void	Logger::logToConsole(std::string const & str) const {
    std::cout << str << std::endl;
}

void	Logger::logToFile(std::string const & str) const {
    std::ofstream   ofs;

    ofs.open(this->_file, std::ios_base::app);
    ofs << str << std::endl;
}
std::string	Logger::makeLogEntry(std::string const & msg) const {
    time_t		rawtime;
	struct tm	*timeinfo;
	char 		buf[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buf, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	return(buf + msg);
}

void    Logger::log(std::string const & dest, std::string const & message) {
    if (dest == "console")
        this->logToConsole(this->makeLogEntry(message));
    else if (dest == "file")
        this->logToFile(this->makeLogEntry(message));   
    else
        std::cout << "please type 'file' or 'console'" << std::endl;
}