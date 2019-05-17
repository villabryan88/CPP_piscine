/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 16:41:42 by bvilla            #+#    #+#             */
/*   Updated: 2019/04/30 13:36:33 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>
#include <cstdlib>

void    addEntry(Phonebook &phonebook)
{
    phonebook.newEntry();
}
void    search(Phonebook &phonebook)
{
	std::string nb;
	int			num;

	phonebook.displayEntries();
	std::cout << "What is the index of the contact you wish to see?" << std::endl;
	std::getline(std::cin, nb);
	num = atoi(nb.c_str());
	if (std::to_string(num) != nb)
	{
		std::cout << "Please enter a number" << std::endl;
		return ;
	}
	phonebook.displayEntry(atoi(nb.c_str()));
}

int     main()
{
    Phonebook phonebook;
    std::string cmd;


    while(cmd.compare("EXIT"))
    {
        std::cout << "ADD, SEARCH, OR EXIT?" << std::endl;
        std::getline(std::cin, cmd);
       if(cmd == "ADD")
            addEntry(phonebook);
        if(cmd == "SEARCH")
            search(phonebook);
    }
        std::cout << "GOODBYE FOREVER!" << std::endl;
    return 0;
}