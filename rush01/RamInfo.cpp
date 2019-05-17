/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RamInfo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/12 01:14:52 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RamInfo.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

RamInfo::RamInfo(void) {
	long	tmp = 0;
	size_t	len = sizeof(tmp);
	sysctlbyname("hw.memsize", &tmp, &len, NULL, 0);

	_totalBytes = tmp;
	update();
};
RamInfo::RamInfo(RamInfo const & src){
	*this = src;
};
RamInfo::~RamInfo(void) {};

RamInfo const &		RamInfo::operator=(RamInfo const & rhs){
	_total = rhs._total;
	_wired = rhs._wired;
	_active = rhs._active;
	_inactive = rhs._inactive;
	_free = rhs._free;
	_totalBytes = rhs._totalBytes;
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void	RamInfo::update(void) {
	mach_msg_type_number_t count = HOST_VM_INFO_COUNT;
	vm_statistics_data_t vmstat;
	if(KERN_SUCCESS != host_statistics(mach_host_self(), HOST_VM_INFO, (host_info_t)&vmstat, &count))
		throw(std::runtime_error("couldn't get host statistics"));

	_total = vmstat.free_count + vmstat.active_count + vmstat.inactive_count + vmstat.wire_count;
	_wired = vmstat.wire_count / _total;
	_active = vmstat.active_count / _total;
	_inactive = vmstat.inactive_count / _total;
	_free = vmstat.free_count / _total;

}


std::string	RamInfo::getRam(void) {
	std::ostringstream info;

	update();
	info << "Total: " << getTotalBytes() / (1024 * 1024 * 1024) << "GB\n";
	info << std::fixed << std::setprecision(2);
	info << "Active: " << getActive() * 100 << "%\n";
	info << "Wired: " << getWired() * 100 << "%\n";
	info << "Inactive: " << getInactive() * 100 << "%\n";
	info << "Free: " << getFree() * 100 << "%\n";
	return (info.str());	
}
////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

double	RamInfo::getTotal(void) const {
	return(this->_total);
}
double	RamInfo::getWired(void) const {
	return(this->_wired);
}
double	RamInfo::getActive(void) const {
	return(this->_active);
}
double	RamInfo::getInactive(void) const {
	return(this->_inactive);
}
double	RamInfo::getFree(void) const {
	return(this->_free);
}

long RamInfo::getTotalBytes(void) const {
	return (this->_totalBytes);
}