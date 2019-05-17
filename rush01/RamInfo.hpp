/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamInfo.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/12 00:54:16 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMINFO_HPP
# define  RAMINFO_HPP
# include <stdexcept>
# include <mach/message.h>
# include <mach/vm_statistics.h>
# include <mach/host_info.h>
# include <mach/mach_host.h>
# include <sys/sysctl.h>
# include <sstream>
# include <iomanip>

class RamInfo {
	public:
		RamInfo(void);
		virtual ~RamInfo(void);
		RamInfo(RamInfo const & src);
		RamInfo const &		operator=(RamInfo const & rhs);

		void	update(void);

		double	getTotal(void) const;
		double	getWired(void) const;
		double	getActive(void) const;
		double	getInactive(void) const;
		double	getFree(void) const;
		long	getTotalBytes(void) const;

		std::string getRam(void);
	private:

	double 	_total;
	long	_totalBytes;
	double	_wired;
	double	_active;
	double	_inactive;
	double	_free;


};

#endif
