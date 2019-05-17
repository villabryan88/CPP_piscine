/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTime.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:48:15 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 14:59:12 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIME_HPP
# define DATETIME_HPP

#include "IMonitorModule.hpp"
#include <string>
#include <iostream>
#include <ctime>

class DateTime : public IMonitorModule {
    public:
        DateTime( void );
        ~DateTime( void );
        DateTime(DateTime const & rhs);
        DateTime & operator=(DateTime const & rhs);

        std::string     getDateTime( void ) const;
        
    private:
        std::string _dateTime;
};


# endif