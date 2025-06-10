/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/06/10 01:23:17 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main() {

	AForm *pres;
	Intern joaozita;

	try {
		
    	Bureaucrat joao(5, "joao");
    	pres = joaozita.makeForm("presidential", "manel");
    	joao.signForm(*pres);
    	joao.executeForm(*pres);

    	delete (pres);
  	}
  	catch (std::exception &e) {
    	std::cerr << e.what() << std::endl;
  	}
}
