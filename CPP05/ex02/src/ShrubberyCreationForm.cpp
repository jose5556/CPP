/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:51:40 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 01:42:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("noname", "notarget", 0, 0) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
	: AForm("ShrubberyCreationForm", target, 145, 137) {

    std::cout << this->getName() << " created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) 
	: AForm(other.getName(), other.getTarget(), other.getGradeSign(), other.getGradeExec()) {
    std::cout << this->getName() << " copy created" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        *this = other;
    return *this;
}

void ShrubberyCreationForm::action() const {

	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	if (!outfile)
		throw std::exception();
	outfile << "\
	     /\\\n\
	    /**\\\n\
	   /****\\   /\\\n\
	  /######\\ /**\\\n\
	 /########\\****\\\n\
	/##########\\##/**\\\n\
	      ||\n\
	      ||\n\
	      ||\n\
	--------------------------" << std::endl;
}
