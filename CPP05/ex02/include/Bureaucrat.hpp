/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:06:04 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:43:15 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(int grade, std::string name);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& src);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		addGrade(void);
	void		decrementGrade(void);
	void		signForm(Form &form);

	class GradeTooHighException : public std::exception {
		
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	
		public:
			const char* what() const throw();
	};

private:
	const std::string	_name;
	int					_grade;
	
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& grade);