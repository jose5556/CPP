/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:50:14 by cereais           #+#    #+#             */
/*   Updated: 2025/07/23 11:11:16 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <iostream>

template <typename T>
int	easyfind(const T &container, int b) {
	
	typename T::const_iterator it = std::find(container.begin(), container.end(), b);
	if (it != container.end())
		return (std::distance(container.begin(), it));
	return (-1);
}
