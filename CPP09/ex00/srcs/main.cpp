/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:58:13 by cereais           #+#    #+#             */
/*   Updated: 2025/07/23 11:12:10 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main(void) {
	
	int indexListResult;
	int indexVectorResult;
	
	int arr[] = {1, 3, 5, 7, 9};
	std::list<int> l(arr, arr + 5);
	std::vector<int> v(arr, arr + 5);


	indexListResult = easyfind(l, 9);
	indexVectorResult = easyfind(v, 9);

	std::cout << "list index is -> " << indexListResult << std::endl;
	std::cout << "vector index is -> " << indexVectorResult << std::endl;
}
