/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:47:22 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 20:23:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {};

MateriaSource::MateriaSource(const MateriaSource& copy) {

	
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
	
}

void MateriaSource::learnMateria(AMateria* materia) {
	
	AMateria* materiaLearned = materia->clone();
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	
}
