/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:34:06 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 19:57:04 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/Cure.hpp"
#include "../include/Ice.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"

int main() {
	
	std::cout << "\n------------------------------------" <<std::endl;
	std::cout << "Subject tests" <<std::endl;
	std::cout << "------------------------------------\n" <<std::endl;

	IMateriaSource* src = new MateriaSource();
    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip( tmp );
    tmp = src->createMateria("cure");
    me->equip( tmp );

    ICharacter* bob = new Character("bob");

    me->use( 0, *bob );
    me->use( 1, *bob );

	std::cout << "\n------------------------------------" <<std::endl;
	std::cout << "My tests" <<std::endl;
	std::cout << "------------------------------------\n" <<std::endl;

    me->unequip(1);
    Character ze( "ze" );
    Character bino( "bino");

    ze.equip(src->createMateria("ice"));
    ze.equip(src->createMateria("cure"));

    bino = ze;
    bino.use(0, *bob);
    bino.use(1, *bob);
    bino.unequip(0);
    bino.use(0, *bob);
    bino.unequip(1);
    bino.equip(src->createMateria("cure"));
    bino.equip(src->createMateria("cure"));
    bino.equip(src->createMateria("cure"));
    bino.unequip(0);
    bino.unequip(1);
    bino.unequip(2);
    

    delete (bob);
    delete (me);
    delete (src);
    return (0);
}
