/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NameInfo.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:23:00 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 22:13:01 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NameInfo.hpp"

NameInfo::NameInfo( void ) {
    char        hostName[50];
    gethostname(hostName, 50);
    _hostName = std::string(hostName);
    _userName = getenv("USER");
    

    _title = "";
    _fields.push_back("Hostname");
    _fields.push_back("Username");

    _values["Hostname"] = _hostName;
    _values["Username"] = _userName;

    _types["Hostname"] = TYPE_STRING;
    _types["Username"] = TYPE_STRING;

    return ;
}


NameInfo::~NameInfo( void ) {
    return ;
}

NameInfo::NameInfo( NameInfo const & rhs ) {
    *this = rhs;
}

NameInfo & NameInfo::operator=(NameInfo const & rhs) {
    this->_hostName = rhs._hostName;
    this->_userName = rhs._userName;
    return *this;
}

std::string     NameInfo::getHostName( void ) const {
    return this->_hostName;
}

std::string     NameInfo::getUserName( void ) const {
    return this->_userName;
}

std::string const & NameInfo::getTitle(void) {
    return this->_title;
}

std::map<std::string, std::string> const & NameInfo::getValues(void){
    return this->_values;
}
std::map<std::string, int>  const &        NameInfo::getTypes(void) {
    return this->_types;
}

std::vector<std::string> const &           NameInfo::getFields(void) {
    return this->_fields;
}