/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvilla <bvilla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:45:31 by bvilla            #+#    #+#             */
/*   Updated: 2019/05/06 18:50:55 by bvilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP
# include <string>


class Bureaucrat {
	private:
		std::string		_name;
		int				_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat &		operator=(Bureaucrat const & rhs);

		class GradeTooHighException : public std::exception{
			public:
				GradeTooHighException(void);
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				GradeTooLowException(void);
				const char* what() const throw();
		};
		std::string const &		getName();
		int	const &				getGrade();

		void	incGrade();
		void	decGrade();
};

#endif
