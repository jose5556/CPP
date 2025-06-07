/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 17:52:28 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/07 18:58:18 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: AForm("noname", "notarget", 0, 0) {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
	: AForm("PresidentialPardonForm", target, 25, 5) {

    std::cout << this->getName() << " created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) 
	: AForm(other.getName(), other.getTarget(), other.getGradeSign(), other.getGradeExec()) {

    std::cout << this->getName() << " copy created" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        *this = other;
    return (*this);
}

void PresidentialPardonForm::action() const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}