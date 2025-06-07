/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:43:41 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:41:57 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

Form::Form() : _name("Unknown"), _gradeSign(0), _gradeExec(0){
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	
	if (_gradeExec < 1 || _gradeSign < 1)
        throw (Form::GradeTooHighException());
    else if (_gradeExec > 150 || _gradeSign > 150)
        throw (Form::GradeTooLowException());
    this->_signed = false;
    std::cout << "Form " << this->_name << " created!" << std::endl;
}

Form::~Form() {}

Form::Form(const Form& copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {
	
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
	
	if (bureaucrat.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    this->_signed = true;
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	
	out << form.getName()
    << ", is signed: " << (form.getSigned() ? "yes" : "no")
    << ", grade to sign: " << form.getGradeSign()
    << ", grade to execute: " << form.getGradeExec();
	return (out);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}
