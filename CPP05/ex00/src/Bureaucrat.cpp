/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:06:07 by cereais           #+#    #+#             */
/*   Updated: 2025/05/26 18:44:23 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	this->_grade = 75;
}
Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name) {
	
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    else if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void) {
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {

    if (this != &src)
        this->_grade = src._grade;
    return *this;
}

std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

void Bureaucrat::addGrade(void)
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& grade) {
	
	out << grade.getName() << ", bureaucrat grade " << grade.getGrade() << ".";
    return (out);
}
