/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:22:57 by cereais           #+#    #+#             */
/*   Updated: 2025/07/24 18:15:37 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main() {
	
	/* MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack); */
	
	//return 0;

	// OWN TESTS //

	MutantStack<int, std::vector<int> > mstackVec1;
    mstackVec1.push(50);
    mstackVec1.push(10);
    MutantStack<int, std::vector<int> > mstackVec2(mstackVec1);
    mstackVec2.pop();
    mstackVec2.push(200);
    mstackVec2.push(234);
    std::cout << "-------MstackVec1-------" << std::endl;
    MutantStack<int, std::vector<int> >::iterator it1 = mstackVec1.begin();
    MutantStack<int, std::vector<int> >::iterator ite1 = mstackVec1.end();
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }
    std::cout << "-------MstackVec2-------" << std::endl;
    MutantStack<int, std::vector<int> >::const_iterator it2 = mstackVec2.cbegin();
    MutantStack<int, std::vector<int> >::const_iterator ite2 = mstackVec2.cend();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    std::cout << "-------Mstack3-------" << std::endl;
    MutantStack<int> mstack3;
    mstack3.push(200);
    mstack3.push(234);
    MutantStack<int>::reverse_iterator it3 = mstack3.rbegin();
    MutantStack<int>::reverse_iterator ite3 = mstack3.rend();
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }
    std::cout << "-------str_Stack-------" << std::endl;
    MutantStack<std::string, std::list<std::string> > str_Stack;
    str_Stack.push("cao");
    str_Stack.push("e");
    str_Stack.push("gato");
    MutantStack<std::string, std::list<std::string> >::const_reverse_iterator it4 = str_Stack.crbegin();
    MutantStack<std::string, std::list<std::string> >::const_reverse_iterator ite4 = str_Stack.crend();
    while (it4 != ite4)
    {
        std::cout << *it4 << std::endl;
        ++it4;
    }
    return 0;
}