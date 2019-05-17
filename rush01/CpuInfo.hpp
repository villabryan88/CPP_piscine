/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuInfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/12 00:49:40 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUINFO_HPP
# define  CPUINFO_HPP

#include <string>
#include <sys/sysctl.h>
#include <sys/time.h>
#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>
#include <sstream>

class CpuInfo {
	public:
		CpuInfo(void);
		virtual ~CpuInfo(void);
		CpuInfo(CpuInfo const & src);
		CpuInfo const &		operator=(CpuInfo const & rhs);

		std::string	const & getModel(void) const;
		long				getCores(void) const;
		long				getSpeed(void) const;
		std::string			getUsage(void) const;
		std::string			getCpu(void);

		void	update(void);
	private:
		std::string _model;
		long		_cores;
		long		_speed;
		std::string	_usage;

};

#endif
