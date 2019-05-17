/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextMode.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:18:53 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 01:23:58 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEXTMODE_HPP
# define TEXTMODE_HPP

#include <ncurses.h>
#include "IMonitorDisplay.hpp"

class TextMode : public IMonitorDisplay {
    public:
        TextMode( void );
        ~TextMode( void );
        TextMode(TextMode const & rhs);
        TextMode & operator=(TextMode const & rhs);

        bool        getEnd(void) const;

        void        display();
        void        input();

    private:
        WINDOW *mainWindow;
        bool   _end;
};





# endif