/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Environment.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:03:58 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 15:13:24 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Environment.hpp"

Environment::Environment( void ) {
    #ifdef _WIN32
    _info = "Windows 32-bit";
    #elif _WIN64
    _info = "Windows 64-bit";
    #elif __unix || __unix__
    _info = "Unix";
    #elif __APPLE__ || __MACH__
    _info = "Mac OSX";
    #elif __linux__
    _info = "Linux";
    #elif __FreeBSD__
    _info = "FreeBSD";
    #else
    _info = "Other";
    #endif
    struct utsname uts;
    uname(&uts);
    _info += " ";
    _info += uts.sysname;
    _info += " ";
    _info += uts.machine;
}

Environment::~Environment( void ) {
    return ;
}

Environment::Environment(Environment const & rhs ){
    *this = rhs;
}

Environment & Environment::operator=(Environment const & rhs ){ 
    this->_info = rhs._info;
    return *this;
}

std::string     Environment::getInfo( void ) const {
    return this->_info;
}