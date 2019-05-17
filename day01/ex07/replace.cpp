/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:21:53 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/01 22:18:30 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	my_replace(std::ifstream &ifs, std::ofstream &ofs, std::string search, std::string replace)
{
	std::string buf;
	std::string file_contents;
	unsigned int	i = 0;
	size_t			pos;
	while (getline(ifs, buf))
	{
		file_contents += buf;
		file_contents += "\n";
	}
	while ((pos = file_contents.find(search, i)) != std::string::npos)
	{
		file_contents.replace(pos, search.length(), replace);
		i += replace.length();
	}
	ofs << file_contents;

}

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: replace filename s1_search s2_replace" << std::endl;
		return 0;
	}
	std::string filename = av[1];
	std::string search = av[2];
	std::string replace = av[3];
	std::ifstream ifs(filename);
	std::ofstream ofs(filename + ".replace");

	if (!ifs)
	{
		std::cout << "input file could not be opened." << std::endl;
		return 0;
	}
	if (!ofs)
	{
		std::cout << "output file could not be opened" << std::endl;
		return 0;
	}
	if (search == "" || replace == "")
	{
		std::cout << "search or replace string is empty" << std::endl;
		return 0;
	}

	my_replace(ifs, ofs, search, replace);
	
	return 0;
}