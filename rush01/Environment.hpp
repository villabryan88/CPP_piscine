/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Environment.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:04:04 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 15:08:38 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRONMENT_HPP
# define ENVIRONMENT_HPP

#include <iostream>
#include <string>
#include "IMonitorModule.hpp"
#include <sys/utsname.h>

class Environment : public IMonitorModule {
    public:
        Environment( void );
        ~Environment( void );
        Environment(Environment const & rhs);
        Environment & operator=(Environment const & rhs);

        std::string         getInfo( void ) const;

    private:
        std::string _info;
};

# endif