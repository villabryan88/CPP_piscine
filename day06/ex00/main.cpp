/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 21:20:17 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/08 22:18:54 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>

int		is_double(char*s){
	std::string copy = s;

	if (!copy.compare("-inf") || !copy.compare("+inf") || !copy.compare("nan"))
		return (1);
	if (*s == '-' || *s == '+')
		s++;
	while(isdigit(*s))
		s++;
	if (*s == '.')
		s++;
	else
		return (0);
	while(isdigit(*s))
		s++;
	if (*s == 0)
		return (1);
	return (0);
}

int		is_float(char *s)
{
	std::string copy = s;

	if (!copy.compare("-inff") || !copy.compare("+inff") || !copy.compare("nanf"))
	{
		return (1);
	}

	if (*s == '-' || *s == '+')
		s++;
	while(isdigit(*s))
		s++;
	if (*s == '.')
		s++;
	while(isdigit(*s))
		s++;
	if (*s == 'f')
	{
		if (*(s + 1) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}

int		is_int(char *s)
{
	char *s_copy = s;
	std::string check;
	if (*s == '-' || *s == '+')
		s++;
	while(*s)
	{
		if(!isdigit(*s))
			return (0);
		s++;
	}
	while (*s_copy == '0')
		s_copy++;
	return (1);
}

int		is_char(char*s)
{
	std::string copy = s;
	if (copy.length() == 1)
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	char	ch;
	int		in;
	float	fl;
	double	db;
	bool	e_ch = 0, e_in = 0, e_fl = 0, spec_fl = 0;
	std::string s_ch = "";
	std::string  input;

	if(ac != 2 || !(strlen(av[1])))
	{
		std::cout << std::endl;
		return 0;
	}
	input = av[1];

	if(is_char(av[1]) && !isdigit(av[1][0]))
	{
		ch = av[1][0];
		in = static_cast<int>(ch);
		fl = static_cast<float>(ch);
		db = static_cast<double>(ch);
	}
	else if (is_float(av[1]))
	{
		fl = atof(input.c_str());
		ch = static_cast<char>(fl);
		in = static_cast<int>(fl);
		db = static_cast<double>(fl);

		if (fl < -128 || fl > 127)
			e_ch = 1;
		else if (!isprint(ch))
			s_ch = "Non displayable";
		if (fl < -2147483648.0L || fl > 2147483647.0L)
			e_in = 1;
		if (isnan(fl) || isinf(fl))
		{
			e_in = 1;
			e_ch = 1;
			spec_fl = 1;
			s_ch = "";
		}
	}
	else if (is_double(av[1]))
	{
		db = atof(input.c_str());
		ch = static_cast<char>(db);
		in = static_cast<int>(db);
		fl = static_cast<float>(db);

		if (db < -128 || db > 127)
			e_ch = 1;
		else if (!isprint(ch))
			s_ch = "Non displayable";
		if (db < -2147483648.0L || db > 2147483647.0L)
			e_in = 1;
		if (isnan(db) || isinf(db))
		{
			e_in = 1;
			e_ch = 1;
			spec_fl = 1;
			s_ch = "";
		}
		if (isnan(fl) || isinf(fl))
			spec_fl = 1;
	}
	else if (is_int(av[1]))
	{
		in = atoi(input.c_str());
		db = static_cast<double>(in);
		ch = static_cast<char>(in);
		fl = static_cast<float>(in);
		if (db < -128 || db > 127)
			e_ch = 1;
		else if (!isprint(ch))
			s_ch = "Non displayable";	
	}
	else
	{
		std::cout << "invalid input" << std::endl;
		return (0);
	}


	if (s_ch == "")
	{
		s_ch = ch;
		if (e_ch)
			s_ch = "impossible";
	}


	std::cout << "char: " << s_ch << std::endl
		<< "int: ";
		
	if (e_in)
		std::cout << "impossible";
	else
		std::cout << in;
	
	std::cout << std::endl
		<< "float: ";
	
	if (e_fl)
		std::cout << "impossible";
	else if (fmod(fl, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) <<fl << "f";
	else
		std::cout << fl;
	
	if (spec_fl)
		std::cout << "f";
	
	std::cout << std::endl
		<< "double: ";
	if (fmod(db, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << db;
	else
		std::cout << fl;

	std::cout << std::endl;
	return (0);
}
