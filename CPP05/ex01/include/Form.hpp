/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:25:15 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:37:00 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form {

public:
	Form();
	Form(std::string name, int gradeSigned, int gradeExec);
	~Form();
	Form(const Form& copy);
	Form& operator=(const Form& src);

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;

	void		beSigned(Bureaucrat& bureaucrat);
	
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
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;

};

std::ostream& operator<<(std::ostream& out, const Form& form);
