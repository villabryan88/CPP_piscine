/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuInfo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/12 20:56:25 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuInfo.hpp"

////////////////////////////////////////
//	Helper Functions				          //
////////////////////////////////////////

static void		 sys_string_store(char const *name, std::string & dst){
	char *tmp = NULL;
	size_t size = 0;

	sysctlbyname(name, NULL, &size, NULL, 0);
	if (size)
	{
		tmp = new char[size];
		sysctlbyname(name, tmp, &size, NULL, 0);
	}
	if (tmp)
	{
		dst = tmp;
		delete tmp;
	}
	else
		dst = "";
}

static void		 sys_number_store(char const *name, long & dst){
	long	tmp = 0;
	size_t	len = sizeof(tmp);
	sysctlbyname(name, &tmp, &len, NULL, 0);

	dst = tmp;
}

static std::string get_cpu_usage(void) {
    char buf[256];
    std::string result = "";
    FILE* file = popen("top -l 1 | grep \"CPU usage\"", "r");
    if (!file)
		throw(std::runtime_error("not enough memory\n"));
	while (fgets(buf, sizeof(buf), file) != NULL)
		result += buf;
    pclose(file);
	result.erase(result.find('\n', 0), 1);
    return result;
}

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////
	

CpuInfo::CpuInfo(void) {
	sys_string_store("machdep.cpu.brand_string", this->_model);
	sys_number_store("hw.physicalcpu", this->_cores);
	sys_number_store("hw.cpufrequency", this->_speed);
	this->_usage = get_cpu_usage();

};
CpuInfo::CpuInfo(CpuInfo const & src){
	*this = src;
};
CpuInfo::~CpuInfo(void) {};

CpuInfo const &		CpuInfo::operator=(CpuInfo const & rhs){
	_model = rhs._model;
	_cores = rhs._cores;
	_speed = rhs._speed;
	_usage = rhs._usage;
	return (*this);
};
	
////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

void	CpuInfo::update(void) {
	this->_usage = get_cpu_usage();
}

std::string	CpuInfo::getCpu(void) {
	std::ostringstream info;
	update();
	info << "Brand: " + getModel() + "\n";
	info << "Cores: " << getCores() << "\n";
	info << "Speed: " << (getSpeed() / 1000000000.0) << "GHz\n";
	info << "Usage: " + getUsage() + "\n";
	return (info.str());
}

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////
std::string	const & CpuInfo::getModel(void) const {
	return(this->_model);
}
long		CpuInfo::getCores(void) const {
	return(this->_cores);
}
long		CpuInfo::getSpeed(void) const {
	return(this->_speed);
}
std::string	CpuInfo::getUsage(void) const {
	return(this->_usage);
}
