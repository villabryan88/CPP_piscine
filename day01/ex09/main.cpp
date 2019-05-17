/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:05:03 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 21:07:10 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>

int     main(void) {
    Logger logger("log.log");
    logger.log("console", "sup");
    logger.log("console", "line2?");
    logger.log("file", "hey there");
    logger.log("file", "yo yo yo");
    return 0;
}