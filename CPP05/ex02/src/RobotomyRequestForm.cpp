/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:52:11 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 02:20:15 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("noname", "notarget", 0, 0) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: AForm("RobotomyRequestForm", target, 72, 45) {

	std::cout << this->getName() << " created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) 
	: AForm(other.getName(), other.getTarget(), other.getGradeSign(), other.getGradeExec()) {
		
	std::cout << this->getName() << " copy created" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {

	if (this != &other)
		*this = other;
	return *this;
}

void RobotomyRequestForm::action() const {

	srand(time(0));
	int randomNum = rand() % 2;

	if (randomNum) {

		std::cout << "!!DRILLINGZZZZZZZZZZZZ!!" << std::endl;
		std::cout <<  this->getTarget() <<" has been robotomized successfully" << std::endl;
	}
	else
		std::cout << "The robotomy failed" << std::endl;
}
