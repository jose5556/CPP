/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:23:21 by cereais           #+#    #+#             */
/*   Updated: 2025/07/24 18:14:33 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <algorithm>
#include <stack>
#include <deque>
#include <vector>
#include <list>
#include <iostream>

template <typename T, typename ContainerType = std::deque<T> >
class MutantStack : public std::stack<T, ContainerType> {
	
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack& copy);
	MutantStack& operator=(const MutantStack& src);

	typedef typename ContainerType::iterator iterator;
    typedef typename ContainerType::const_iterator const_iterator;
    typedef typename ContainerType::reverse_iterator reverse_iterator;
    typedef typename ContainerType::const_reverse_iterator const_reverse_iterator;

    iterator begin();
    iterator end();
    const_iterator cbegin();
    const_iterator cend();
    reverse_iterator rbegin();
    reverse_iterator rend();
	const_reverse_iterator crbegin();
    const_reverse_iterator crend();

};

#include "MutantStack.tpp"

#endif