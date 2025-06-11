/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 01:54:56 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/11 03:56:38 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {

	system("clear");

    Base *base;

    base = generate();
    identify(base);
    identify(*base);
    if (base)
        delete base;
}

Base * generate(void) {
	
	Base	*instance;
	int		randomNum;
	
	srand(time(0));
	randomNum = rand() % 3;

	std::cout << randomNum << std::endl;
	if (randomNum == 0) {
		instance = new A;
		std::cout << "Created object A" << std::endl;
	} else if (randomNum == 1) {
		instance = new B;
		std::cout << "Created object B" << std::endl;
	} else if (randomNum == 2) {
		instance = new C;
		std::cout << "Created object C" << std::endl;
	} else {
		instance = NULL;
		std::cout << "NULL" << std::endl;
	}
	return (instance);
}

void identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "The object pointed is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The object pointed is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The object pointed is C" << std::endl;
	else
		std::cout << "ahhhhhh..." << std::endl;
}

void identify(Base& p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "The object referenced is A" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "The object referenced is B" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "The object referenced is C" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
	std::cout << "Upsi..." << std::endl;
}
