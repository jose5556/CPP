/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:43:41 by cereais           #+#    #+#             */
/*   Updated: 2025/06/03 23:56:36 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() {}

Form::Form(std::string name) : _name(name) {
	
	
	_signed = false;
	
}

Form::~Form() {}

Form::Form(const Form& copy) {
	
	this->_signed = copy._signed;
}

Form& Form::operator=(const Form& src) {
	
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string	Form::getName() const {

	return (this->_name);
}

bool	Form::getSigned() const {

	return (this->_signed);
}

int	Form::getGradeSign() const {

	return (this->_gradeSign);
}

int	Form::getGradeExec() const {

	return (this->_gradeExec);
}

void	Form::beSigned(Bureaucrat& bureaucrat) {
	
	if (grade )
}