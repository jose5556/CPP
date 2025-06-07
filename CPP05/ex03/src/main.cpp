/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/06/07 19:22:05 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main() {

	try {
		Bureaucrat quim(70, "quim");
		ShrubberyCreationForm f1("manuel");
		RobotomyRequestForm f2("miguel");
		PresidentialPardonForm f3("quimzinho");

		std::cout << std::endl;
		quim.signForm(f1);
		std::cout << std::endl;
		quim.signForm(f2);
		std::cout << std::endl;
		quim.signForm(f3);
		std::cout << std::endl;
		quim.executeForm(f1);
		std::cout << std::endl;
		quim.executeForm(f2);
		std::cout << std::endl;
		quim.executeForm(f3);
		std::cout << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
	}
}
