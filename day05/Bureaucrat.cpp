/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/06 18:51:13 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

////////////////////////////////////////
//  constructors & deconstructors etc //
////////////////////////////////////////

Bureaucrat::Bureaucrat(void): _name(""), _grade(150){};
Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade){};
Bureaucrat::Bureaucrat(Bureaucrat const & src){
	*this = src;
};
Bureaucrat::~Bureaucrat(void) {};

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs){
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {};
const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("The grade is too high\n");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {};
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("The grade is too low\n");
}

////////////////////////////////////////
//  other functions                   //
////////////////////////////////////////

////////////////////////////////////////
//  setters & getters                 //
////////////////////////////////////////

std::string	const &		Bureaucrat::getName() {
	return (this->_name);
}
int	const &				Bureaucrat::getGrade() {
	return (this->_grade);
}

void	Bureaucrat::incGrade(){
	if (this->_grade > 1)
		this->_grade--;
	else
		throw(Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decGrade(){
	if (this->_grade < 150)
		this->_grade++;
	else
		throw(Bureaucrat::GradeTooLowException());
}