/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:09:47 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/23 16:06:09 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& src);

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria*	_inventory[4];
};
