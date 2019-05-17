/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-goff <ale-goff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:57:28 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/11 14:06:23 by ale-goff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY
# define IMONITORDISPLAY

// Behavior of display mode
// GUI and class with NCURSES should inherit from it
class IMonitorDisplay {
    public:
        virtual ~IMonitorDisplay( void ) {;}
};

# endif