/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:36:17 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 18:42:48 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <new>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class AMateria {
	
	public:
		AMateria();
		AMateria(std::string const & type);
		~AMateria();
		AMateria(const AMateria& copy);
		AMateria& operator=(const AMateria& src);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
};
