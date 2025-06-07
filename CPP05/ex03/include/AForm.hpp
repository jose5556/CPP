/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:25:15 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:37:00 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class AForm {

public:
	AForm();
	AForm(std::string name, const std::string target, int gradeSigned, int gradeExec);
	virtual ~AForm();
	AForm(const AForm& copy);
	AForm& operator=(const AForm& src);

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeSign() const;
	int			getGradeExec() const;
	std::string getTarget() const;

	void		beSigned(Bureaucrat& bureaucrat);

	virtual void action() const = 0;
	void execute(Bureaucrat const & executor) const;
	
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	
	class NotSignedException : public std::exception {
		public:
		  const char *what() const throw();
	};
	
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;
	const std::string	_target;
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);
