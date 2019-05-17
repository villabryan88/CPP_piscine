/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 13:50:36 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 01:27:30 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "NameInfo.hpp"
#include "DateTime.hpp"
#include "Environment.hpp"
#include "NetworkThroughput.hpp"
#include "TextMode.hpp"
#include "CpuInfo.hpp"
#include "RamInfo.hpp"

int         main() {
    // NameInfo tst;
    // DateTime dt;
    // Environment e;
    // NetworkThroughput n;
    // CpuInfo cpu;
    // RamInfo ram;

    TextMode *win = new TextMode;
    // std::cout << tst.getHostName() << std::endl;
    // std::cout << tst.getUserName() << std::endl;
    // std::cout << dt.getDateTime() << std::endl;
    // std::cout << e.getInfo() << std::endl;
    // std::cout << n.getNetwork() << std::endl;
    // std::cout << cpu.getModel() << std::endl;
    // std::cout << cpu.getCores() << std::endl;
    // std::cout << cpu.getSpeed() / 1000000000.0 << "GHz" << std::endl;
    // std::cout << cpu.getUsage() << std::endl;
    // std::cout << ram.getTotalBytes() / (1024 * 1024 * 1024) << "GB" << std::endl;
    // std::cout << ram.getWired() << std::endl;
    // std::cout << ram.getActive() << std::endl;
    // std::cout << ram.getInactive() << std::endl;
    // std::cout << ram.getFree() << std::endl;

    // usleep(100000);
    // cpu.update();
    // ram.update();
    // std::cout << cpu.getUsage() << std::endl;
    // std::cout << ram.getWired() << std::endl;
    // std::cout << ram.getActive() << std::endl;
    // std::cout << ram.getInactive() << std::endl;
    // std::cout << ram.getFree() << std::endl;

    while(1)
    {
        if (win->getEnd())
        {
            endwin();
            return 0;
        }
        win->display();
        win->input();
        usleep(10000);
    }
    return 0;
}