/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:54:49 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 22:09:57 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP
# include <map>
# include <string>
# include <vector>
# define TYPE_STRING 0
# define TYPE_PERCENT 1
# define TYPE_HISTORY 2
// Describe the behavior of one of our monitor's module.
// Abstraction of the avalaible modules.
class IMonitorModule {
    public:
        virtual std::vector<std::string> const &            getFields(void) = 0;
        virtual std::map<std::string, std::string> const &  getValues(void) = 0;
        virtual std::map<std::string, int> const &          getTypes(void) = 0;
        virtual std::string const &                         getTitle(void) = 0;
};
#endif