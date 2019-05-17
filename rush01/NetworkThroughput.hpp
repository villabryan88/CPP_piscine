/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkThroughput.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:35:15 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 15:59:14 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKTHROUGHPUT_HPP
# define NETWORKTHROUGHPUT_HPP

#include "IMonitorModule.hpp"

#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/sysctl.h>
# include <netinet/ip.h>
# include <netinet/ip_var.h>

class NetworkThroughput : public IMonitorModule {
    public:
        NetworkThroughput( void );
        ~NetworkThroughput( void );
        NetworkThroughput(NetworkThroughput const & rhs);
        NetworkThroughput & operator=(NetworkThroughput const & rhs);

        std::string     getNetwork( void ) const;

    private:
        std::string _network;
};


# endif