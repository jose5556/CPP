/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 01:01:26 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/11 01:52:02 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"
#include "../include/data.h"

int	main(void) {

	//struct
	Data something;
	something.thisIsSomething = 17;

	//uintptr_t to test
	uintptr_t	test = 0;

	test = Serializer::serialize(&something);

	std::cout << &something << std::endl;
	std::cout << Serializer::deserialize(test) << std::endl;
}
