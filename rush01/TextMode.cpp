/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TextMode.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:18:47 by ale-goff          #+#    #+#             */
/*   Updated: 2019/05/12 23:29:51 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TextMode.hpp"
#include "NameInfo.hpp"
#include "DateTime.hpp"
#include "Environment.hpp"
#include "NetworkThroughput.hpp"
#include "CpuInfo.hpp"
#include "RamInfo.hpp"
#include <vector>

int     xMax;
int     yMax;

TextMode::TextMode( void ) {
    initscr();
    noecho();
    getmaxyx(stdscr, yMax, xMax);
    clear();
    curs_set(0); 
    cbreak();
    start_color();
    keypad(stdscr, TRUE);
    _end = 0;
}

TextMode::~TextMode( void ) {
    // delete mainWindow;
}

void            TextMode::input(void) {
    int   ch = getch();

	if (ch == 'q')
		this->_end = 1;
}

static void     display_modules(WINDOW* mainWindow, std::vector<IMonitorModule*> & modules) {
    static int        line = 0;    
    std::vector<IMonitorModule*>::iterator it = modules.begin();
    std::vector<IMonitorModule*>::iterator ite;
    std::vector<std::string>::iterator fit;
    std::vector<std::string>::iterator fite;



    for(ite = modules.end(); it != ite; it++)
    {
        IMonitorModule *mod = *it;
        std::vector<std::string> *fields = mod->getFields();
        mvwprintw(mainWindow, yMax / 7 + line++, 0, "%s", (*it)->getTitle().c_str());

        std::vector<std::string>::iterator fit = mod->getFields().begin();
        std::vector<std::string>::iterator fite;

        for(fite = (*it)->getFields().end(); fit != fite; fit++)
        {
            mvwprintw(mainWindow, yMax / 7 + line++, 0, "%s", fit->c_str());
            mvwprintw(mainWindow, yMax / 7 + line++, 0, "%s", (((*it)->getValues())[(*fit)]).c_str());
        }
        line++;
    }
}

void            TextMode::display( void ) {
    NameInfo tst;
    // DateTime dt;
    // Environment e;
    // NetworkThroughput n;
    // CpuInfo cpu;
    // RamInfo ram;
    std::vector<IMonitorModule*>  modules;
    modules.push_back(static_cast<IMonitorModule*>(&tst));
    mainWindow = newwin(yMax, xMax, 0, 0);

    nodelay(stdscr, TRUE);

    mvwprintw(mainWindow, 3, xMax / 2 - 17, "FT_GKRELLM (System Monitoring)");
    mvwprintw(mainWindow, 6, xMax / 2 - 10, "Press 'q' to quit");
    //     refresh();
    // wrefresh(mainWindow);


    display_modules(mainWindow, modules);
    // mvwprintw(mainWindow, yMax / 7 + 0, 0, "Hostname\n%s\n", tst.getHostName().c_str());
    // mvwprintw(mainWindow, yMax / 7 + 4, 0, "Username\n%s\n", tst.getUserName().c_str());
    // mvwprintw(mainWindow, yMax / 7 + 8, 0, "OS\n%s\n", e.getInfo().c_str());
    // mvwprintw(mainWindow, yMax / 7 + 12, 0, "Date/Time\n%s\n", dt.getDateTime().c_str());
    // // mvwprintw(mainWindow, yMax / 7 + 10, 3, "Processor\n%d\n", tst.getHostName());
    // mvwprintw(mainWindow, yMax / 7 + 16, 0, "Network\n%s\n", n.getNetwork().c_str());
    // mvwprintw(mainWindow, yMax / 7 + 21, 0, "CPU\n%s\n", cpu.getCpu().c_str());
    // mvwprintw(mainWindow, yMax / 7 + 28, 0, "RAM\n%s\n", ram.getRam().c_str());
    // wrefresh(mainWindow);
    refresh();
}   

bool    TextMode::getEnd(void) const {
    return (_end);
}