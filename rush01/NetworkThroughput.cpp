/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkThroughput.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:34:54 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 17:01:39 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkThroughput.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <sstream>

NetworkThroughput::NetworkThroughput( void ) {
    void *oldp[1024];
	size_t oldlen = sizeof(struct ipstat), newlen = 0;
	void * newp = NULL;
    std::stringstream ss;
	sysctlbyname("net.inet.ip.stats", oldp, &oldlen, newp, newlen);
	struct ipstat * g = (struct ipstat *) oldp;
    ss << "IPS RECEIVED = " << std::to_string(g->ips_total) << std::endl << "IPS GENERATED = "
    << std::to_string(g->ips_localout) << std::endl;
    _network = ss.str();
}

NetworkThroughput::~NetworkThroughput( void ) {
    return ;
}

NetworkThroughput::NetworkThroughput( NetworkThroughput const & rhs ) {
    *this = rhs;
}

NetworkThroughput & NetworkThroughput::operator=(NetworkThroughput const & rhs) {
    this->_network = rhs._network;
    return *this;
}


std::string     NetworkThroughput::getNetwork( void ) const {
    return this->_network;
}