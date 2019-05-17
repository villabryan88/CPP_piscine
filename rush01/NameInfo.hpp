/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NameInfo.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 14:15:18 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 22:12:58 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NAMEINFO_HPP
# define NAMEINFO_HPP

#include <string>
#include <unistd.h>
#include <stdlib.h>
#include "IMonitorModule.hpp"

class NameInfo : public IMonitorModule {
    public:
        NameInfo( void );
        ~NameInfo( void );
        NameInfo( NameInfo const & rhs );
        NameInfo & operator=( NameInfo const & rhs );

        virtual std::vector<std::string> const &            getFields(void);
        virtual std::map<std::string, std::string> const & getValues(void);
        virtual std::map<std::string, int>  const &        getTypes(void);
        virtual std::string const &                        getTitle(void);
        std::string  getHostName( void ) const;
        std::string  getUserName( void ) const;

    private:
       std::string  _hostName;
       std::string  _userName;

       std::vector<std::string>             _fields;
       std::map<std::string, std::string>   _values;
       std::map<std::string, int>           _types;
       std::string                          _title;

};

# endif