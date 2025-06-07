/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:43:41 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 17:41:57 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm() : _name("Unknown"), _gradeSign(0), _gradeExec(0){
}

AForm::AForm(std::string name, std::string target, int gradeSign, int gradeExec)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec), _target(target)
{
	if (_gradeExec < 1 || _gradeSign < 1)
		throw AForm::GradeTooHighException();
	else if (_gradeExec > 150 || _gradeSign > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm " << this->_name << " created!" << std::endl;
}


AForm::~AForm() {}

AForm::AForm(const AForm& copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {
	
	this->_signed = copy._signed;
}

AForm& AForm::operator=(const AForm& src) {
	
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

std::string	AForm::getName() const {

	return (this->_name);
}

bool	AForm::getSigned() const {

	return (this->_signed);
}

int	AForm::getGradeSign() const {

	return (this->_gradeSign);
}

int	AForm::getGradeExec() const {

	return (this->_gradeExec);
}

std::string AForm::getTarget() const {

	return (this->_target);
}

void	AForm::beSigned(Bureaucrat& bureaucrat) {
	
	if (bureaucrat.getGrade() > this->getGradeSign())
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
	
	out << form.getName()
    << ", is signed: " << (form.getSigned() ? "yes" : "no")
    << ", grade to sign: " << form.getGradeSign()
    << ", grade to execute: " << form.getGradeExec();
	return (out);
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

const char *AForm::NotSignedException::what() const throw() {
  return ("form is not signed!");
}

void AForm::execute(Bureaucrat const &bureaucrat) const {

	if (this->_signed == false)
		throw NotSignedException();
	else if (bureaucrat.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	this->action();
}
