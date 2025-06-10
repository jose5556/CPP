/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:23:47 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 01:14:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern& copy) {
	
	*this = copy;
}

Intern& Intern::operator=(const Intern& src) {

	(void) src;
	return (*this);
}

const char *Intern::IncorrectName::what() const throw () {

	return ("Name does not exist!");	
}

AForm* Intern::presidential(std::string target) {

	return (new PresidentialPardonForm(target));
}

AForm* Intern::robotomy(std::string target) {

	return (new RobotomyRequestForm(target));
}

AForm* Intern::shrubbery(std::string target) {

	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(std::string name, std::string target) {

	std::string arr[] = {
		"presidential",
		"robotomy",
		"shrubbery"
	};

	InternFunc funcs[] = {
		&Intern::presidential,
		&Intern::robotomy,
		&Intern::shrubbery,
	};

	for (int i = 0; i < 3; i++) {
		if (arr[i] == name) {
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*funcs[i])(target));
		}
	}
	throw IncorrectName();
	return (NULL);
}
