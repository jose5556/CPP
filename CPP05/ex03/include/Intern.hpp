/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:23:39 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 01:10:16 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
	
public:
	Intern();
	~Intern();
	Intern(const Intern& copy);
	Intern& operator=(const Intern& src);
	
	AForm*	makeForm(std::string name, std::string target);

	class IncorrectName : public std::exception {
		public:
			const char* what() const throw();
	};

private:
	AForm* presidential(std::string target);
	AForm* robotomy(std::string target);
	AForm* shrubbery(std::string target);

};

typedef AForm*(Intern::*InternFunc)(std::string target);
